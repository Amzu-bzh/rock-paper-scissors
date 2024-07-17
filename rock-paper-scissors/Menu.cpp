/// \file		Menu.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "Menu.hpp"

Menu::Menu()
{
	// std::cout << "Construction of the Menu : " << this << std::endl;
	// system("pause");
}

Menu::~Menu()
{
	// std::cout << "Destruction of the Menu : " << this << std::endl;
	// system("pause");
}

int Menu::mainScreen()
{
	system("cls");

	std::cout << text["title"].asString() << std::endl;

	std::cout << text["main"].asString();

	int choice;
	std::cin >> choice;

	return choice;
}

void Menu::rulesScreen()
{
	system("cls");

	std::cout << text["title"].asString() << std::endl;

	std::cout << text["rules1"].asString() << std::endl;
	std::cout << text["rules2"].asString() << std::endl;
	std::cout << text["rules3"].asString() << std::endl;

	system("pause");
}
