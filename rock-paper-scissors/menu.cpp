#include "menu.hpp"

int mainMenu()
{
	std::cout << "      Rock Paper Scissors" << std::endl << "     ---------------------\n" << std::endl;

	std::cout << "1. Play\n2. Rules\n3. Exit" << std::endl << "What's your choice ? ";

	int choice;
	std::cin >> choice;

	return choice;
}

void rulesMenu()
{
	std::cout << "Every turn, you choose an object (a rock, a paper or scissors).\nYour opponent also choose one.\nIf you have the same object, there is a tie.\nEach object beats an object and is beaten by another.\nStone crushes scissors.\nPaper wraps stone.\nAnd scissors cut paper.";

	system("pause");
}