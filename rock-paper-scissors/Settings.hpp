/// \file		Settings.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef settings_hpp
#define settings_hpp

#include <iostream>

#include <json/json.h>
#include <fstream>

class Settings
{
public:
	Settings();
	~Settings();

	int mainScreen();

	Json::Value text;
	Json::Value settings;

private:
	void languageScreen();

	std::ifstream iSettingsFile;
	std::ofstream oSettingsFile;

	std::string settingsFileContent;

	Json::StyledWriter writer;
	Json::Reader reader;
};

#endif // !settings_hpp
