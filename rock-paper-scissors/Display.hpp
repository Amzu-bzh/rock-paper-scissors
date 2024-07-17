/// \file		Dsiplay.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef display_hpp
#define display_hpp

#include <iostream>

#include <json/json.h>
#include <fstream>

class Display
{
public:
	Display();
	~Display();

	Json::Value general;
	Json::Value menu;
	Json::Value game;
	Json::Value settings;

	void changeLanguage(int language);

private:
	void parseFiles(std::string language);

	std::ifstream language_file;
	Json::Reader reader;

	std::string fileDirectory;
	std::string files[4] = { "general/", "menu/", "game/", "settings/" };
};

#endif // !display_hpp
