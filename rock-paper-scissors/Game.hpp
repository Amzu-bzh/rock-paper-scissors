/// \file		Game.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef game_h
#define game_h

#include <iostream>

#include <json/json.h>

#include "StatisticalSystem.hpp"

class Game
{
public :
	Game(StatisticalSystem *statisticalSystem);
	~Game();

	void runGame();

	Json::Value text;

private :
	void gameLoop(int score[]);

	void analyzeResult(int answer, int choice, int score[]);
	int compare(int lose, int win, int answer);

	void updateScore(int result, int score[]);

	int generateNumber();

	void displayScore(int score[]);

	StatisticalSystem* p_stat;
	std::vector<int> stat = { 0, 0, 0, 0, 0 };
};

#endif /* game_h */