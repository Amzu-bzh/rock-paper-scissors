/// \file		TranslateSystem.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef display_hpp
#define display_hpp

#include <iostream>

#include <json/json.h>
#include <fstream>

#include "Menu.hpp"
#include "Game.hpp"
#include "Settings.hpp"

class TranslateSystem
{
public:
	TranslateSystem(Menu *menu, Game *game, Settings *settings);
	~TranslateSystem();

	Json::Value general;
	Json::Value settings;

	void changeLanguage();

private:
	void parseFiles(std::string language);

	std::ifstream settingsFile;
	std::ifstream languageFile;
	Json::Reader reader;

	std::string fileDirectory;

	Menu* p_menu;
	Game* p_game;
	Settings* p_settings;
};

#endif // !display_hpp
