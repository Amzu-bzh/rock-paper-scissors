/// \file		main.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include <iostream>

#include "Menu.hpp"
#include "game.hpp"

using namespace std;

int main()
{
	bool play(true);

	Menu gameMenu;

	while (play)
	{
		switch (gameMenu.mainScreen())
		{
		case 1:
			runGame();
			break;

		case 2:
			gameMenu.rulesScreen();
			break;

		case 3:
			play = false;
			break;

		default:
			break;
		}

	}

	return 0;
}