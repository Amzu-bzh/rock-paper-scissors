/// \file		TranslateSystem.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef statistic_system_hpp
#define statistic_system_hpp

#include <iostream>

#include <json/json.h>
#include <fstream>

#include "Menu.hpp"
#include "Game.hpp"
#include "Settings.hpp"
#include "StatisticalSystem.hpp"

class TranslateSystem
{
public:
	TranslateSystem(Menu *menu, Game *game, Settings *settings, StatisticalSystem *statisticalSystem);
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
	StatisticalSystem* p_stat;
};

#endif /* statistic_system_hpp */
