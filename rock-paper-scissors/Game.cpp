/// \file		Game.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "Game.hpp"

Game::Game(StatisticalSystem *statisticalSystem)
{
	p_stat = statisticalSystem;
	stat.reserve(5);
	// std::cout << "Construction of the Game: " << this << std::endl;
	// system("pause");
}

Game::~Game()
{
	// std::cout << "Destruction of the Game: " << this << std::endl;
	// system("pause");
}

void Game::runGame()
{
	std::fill(stat.begin(), stat.end(), 0);
	int score[2];
	score[0] = 0;
	score[1] = 0;

	gameLoop(score);

	system("cls");

	std::cout << text["title"].asString() << std::endl;

	displayScore(score);

	if (score[0] == 3)
	{
		stat[0] += 1;
		std::cout << text["win_game"].asString() << std::endl;
	}
	else
	{
		stat[1] += 1;
		std::cout << text["lose_game"].asString() << std::endl;
	}

	p_stat->update(stat);

	std::cout << text["pause"].asString();
	std::cin.get();
}

void Game::gameLoop(int score[])
{
	int answer(0), choice(0);

	while (!(score[0] == 3) && !(score[1] == 3))
	{
		answer = generateNumber();

		system("cls");

		std::cout << text["title"].asString() << std::endl;

		displayScore(score);

		std::cout << text["choice"].asString();

		std::cin >> choice;

		analyzeResult(answer, choice, score);

		std::cout << text["pause"].asString();
		std::cin.ignore();
		std::cin.get();
	}
}

void Game::analyzeResult(int answer, int choice, int score[])
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

int Game::compare(int lose, int win, int answer)
{
	if (answer == win)
	{
		stat[2] += 1;
		return 1;
	}
	else if (answer == lose)
	{
		stat[4] += 1;
		return 2;
	}
	else
	{
		stat[3] += 1;
		return 3;
	}
}

void Game::updateScore(int result, int score[])
{
	switch (result)
	{
	case 1:
		std::cout << text["win_round"].asString() << std::endl;
		score[0] += 1;
		break;

	case 2:
		std::cout << text["lose_round"].asString() << std::endl;
		score[1] += 1;
		break;

	case 3:
		std::cout << text["tie_round"].asString() << std::endl;
		break;

	default:
		break;
	}
}

int Game::generateNumber()
{
	int answer = (rand() % (3 - 1 + 1)) + 1;

	return answer;
}

void Game::displayScore(int score[])
{
	std::cout << text["you_score"].asString() << score[0] << std::endl;
	std::cout << text["bot_score"].asString() << score[1] << std::endl;
}