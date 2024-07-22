/// \file		StatisticalSystem.hpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#ifndef statistical_system_hpp
#define statistical_system_hpp

#include <iostream>

#include <json/json.h>
#include <fstream>

class StatisticalSystem
{
public:
	StatisticalSystem();
	~StatisticalSystem();

	void mainScreen();

	void update(std::vector<int> lastGameStat);

	Json::Value text;
	Json::Value stat;

private:
	void loadStats();

	std::ifstream statFile;
	Json::Reader reader;

	std::ofstream saveStatFile;
	Json::StyledWriter writer;
};

#endif /* statistical_system_hpp */
