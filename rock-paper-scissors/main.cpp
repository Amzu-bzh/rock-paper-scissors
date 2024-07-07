#include <iostream>

#include "menu.hpp"
#include "game.hpp"

using namespace std;

int main()
{
	bool play(true);

	while (play)
	{
		switch (mainMenu())
		{
		case 1:
			gameLoop();
			break;

		case 2:
			rulesMenu();
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