/// \file		main.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include <iostream>
#include <json/json.h>
#include <fstream>

#include "Display.hpp"
#include "Menu.hpp"
#include "Game.hpp"
#include "Settings.hpp"

using namespace std;

int main()
{
	bool play(true);

	Menu menu;
	Game game;
	Settings settings;
	Display display(&menu, &game, &settings);

	while (play)
	{
		switch (menu.mainScreen())
		{
		case 1:
			game.runGame();
			break;

		case 2:
			menu.rulesScreen();
			break;

		case 3:
			settings.mainScreen();

			display.changeLanguage();

			break;

		case 4:
			play = false;
			break;

		default:
			break;
		}

	}

	return 0;
}