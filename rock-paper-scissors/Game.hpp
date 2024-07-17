/// \file		Game.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef game_h
#define game_h

#include <iostream>

#include <json/json.h>

class Game
{
public :
	Game();
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
};

#endif /* game_h */