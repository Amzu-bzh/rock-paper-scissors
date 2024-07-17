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

int test();

int main()
{
	bool play(true);

	Display display;
	Menu menu(&display);
	Game game(&display);
	Settings settings(&display);

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