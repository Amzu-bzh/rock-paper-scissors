#ifndef game_h
#define game_h

#include <iostream>

void runGame();

void gameLoop(int score[]);

void analyzeResult(int answer, int choice, int score[]);
int compare(int lose, int win, int answer);

void updateScore(int result, int score[]);

int generateNumber();

#endif /* game_h */