/// \file		Menu.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef menu_h
#define menu_h

#include <iostream>

#include <json/json.h>

class Menu
{
public:
	Menu();
	~Menu();

	int mainScreen();
	void rulesScreen();

	Json::Value text;

private:
};

#endif /* menu_h */
