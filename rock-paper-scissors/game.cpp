#include "game.hpp"

void runGame()
{
	int score[2];
	score[0] = 0;
	score[1] = 0;

	gameLoop(score);

	system("cls");

	std::cout << "You : " << score[0] << std::endl;
	std::cout << "Bot : " << score[1] << std::endl;

	if (score[0] == 3)
	{
		std::cout << "You won the game !" << std::endl;
	}
	else
	{
		std::cout << "You lost the game." << std::endl;
	}

	system("pause");
}

void gameLoop(int score[])
{
	int answer(0), choice(0);

	while (!(score[0] == 3) && !(score[1] == 3))
	{
		answer = generateNumber();

		system("cls");

		std::cout << "You : " << score[0] << std::endl;
		std::cout << "Bot : " << score[1] << std::endl;

		std::cout << "1. Rock\n2. Paper\n3. Scissors" << std::endl << "What's your choice ? " << std::endl;

		std::cin >> choice;

		analyzeResult(answer, choice, score);

		system("pause");
	}
}

void analyzeResult(int answer, int choice, int score[])
{
	int result(0);

	switch (choice)
	{
	case 1:
		result = compare(2, 3, answer);
		break;

	case 2:
		result = compare(3, 1, answer);
		break;

	case 3:
		result = compare(1, 2, answer);
		break;

	case 0:
		result = 1;
		break;

	default:
		break;
	}

	updateScore(result, score);
}

int compare(int lose, int win, int answer)
{
	if (answer == win)
	{
		return 1;
	}
	else if (answer == lose)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

void updateScore(int result, int score[])
{
	switch (result)
	{
	case 1:
		std::cout << "You win !" << std::endl;
		score[0] += 1;
		break;

	case 2:
		std::cout << "You lose !" << std::endl;
		score[1] += 1;
		break;

	case 3:
		std::cout << "It's a tie." << std::endl;
		break;

	default:
		break;
	}
}

int generateNumber()
{
	int answer = (rand() % (3 - 1 + 1)) + 1;

	return answer;
}