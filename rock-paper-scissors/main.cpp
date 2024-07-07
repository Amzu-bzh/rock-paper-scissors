#include <iostream>

#include "menu.hpp"
#include "game.hpp"

using namespace std;

int main()
{
	bool play(true);

	while (play)
	{
		switch (mainScreen())
		{
		case 1:
			runGame();
			break;

		case 2:
			rulesScreen();
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