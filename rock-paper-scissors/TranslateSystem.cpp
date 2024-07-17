/// \file		Display.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "TranslateSystem.hpp"

TranslateSystem::TranslateSystem(Menu *menu, Game* game, Settings* settings)
{
	p_menu = menu;
	p_game = game;
	p_settings = settings;

	changeLanguage();

	// std::cout << "Construction of the Display class : " << this << std::endl;
	// system("pause");
}

TranslateSystem::~TranslateSystem()
{
	// std::cout << "Destruction of the Display class : " << this << std::endl;
	// system("pause");
}

void TranslateSystem::changeLanguage()
{
	settingsFile.open("settings.json");
	reader.parse(settingsFile, settings);
	settingsFile.close();

	parseFiles(settings["language"].asString());

}

void TranslateSystem::parseFiles(std::string language)
{
	p_menu->text.clear();
	p_game->text.clear();
	p_settings->text.clear();

	fileDirectory = "translate/" + language + ".json";

	languageFile.open(fileDirectory);
	reader.parse(languageFile, general);
	languageFile.close();

	p_menu->text = general["menu"];
	p_game->text = general["game"];
	p_settings->text = general["settings"];
}