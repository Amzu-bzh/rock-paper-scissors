/// \file		StatisticalSystem.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "StatisticalSystem.hpp"

StatisticalSystem::StatisticalSystem()
{
	// std::cout << "Construction of the StatisticalSystem class : " << this << std::endl;
	// system("pause");
}

StatisticalSystem::~StatisticalSystem()
{
	// std::cout << "Destruction of the StatisticalSystem class : " << this << std::endl;
	// system("pause");
}

void StatisticalSystem::mainScreen()
{
	loadStats();

	system("cls");

	std::cout << text["title"].asString() << std::endl;

	std::cout << text["intro"].asString() << std::endl;
	std::cout << text["game"].asString() << std::endl;
	std::cout << text["win"].asString() << stat["game_win_number"].asString() << std::endl;
	std::cout << text["lose"].asString() << stat["game_lose_number"].asString() << std::endl;

	std::cout << text["round"].asString() << std::endl;
	std::cout << text["win"].asString() << stat["round_win_number"].asString() << std::endl;
	std::cout << text["tie"].asString() << stat["round_tie_number"].asString() << std::endl;
	std::cout << text["lose"].asString() << stat["round_lose_number"].asString() << std::endl;

	std::cout << text["pause"].asString();
	std::cin.ignore();
	std::cin.get();
}

void StatisticalSystem::loadStats()
{
	stat.clear();

	statFile.open("statistics.json");
	
	reader.parse(statFile, stat);
	statFile.close();
}

void StatisticalSystem::update(std::vector<int> lastGameStat)
{
	loadStats();

	stat["game_win_number"] = stat["game_win_number"].asInt() + lastGameStat[0];
	stat["game_lose_number"] = stat["game_lose_number"].asInt() + lastGameStat[1];
	stat["round_win_number"] = stat["round_win_number"].asInt() + lastGameStat[2];
	stat["round_tie_number"] = stat["round_tie_number"].asInt() + lastGameStat[3];
	stat["round_lose_number"] = stat["round_lose_number"].asInt() + lastGameStat[4];

	saveStatFile.open("statistics.json");
	saveStatFile << writer.write(stat);
	saveStatFile.close();
}