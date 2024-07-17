/// \file		Menu.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef menu_h
#define menu_h

#include <iostream>

#include <json/json.h>

#include "Display.hpp"

class Menu
{
public:
	Menu(Display *display);
	~Menu();

	int mainScreen();
	void rulesScreen();

private:
	Display* m_display;
};

#endif /* menu_h */
