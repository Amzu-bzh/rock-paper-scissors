/// \file		Menu.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "Menu.hpp"

Menu::Menu(Display *display)
{
	m_display = display;

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

	std::cout << m_display->general["title"].asString() << std::endl;

	std::cout << m_display->menu["main"].asString();

	int choice;
	std::cin >> choice;

	return choice;
}

void Menu::rulesScreen()
{
	system("cls");

	std::cout << m_display->general["title"].asString() << std::endl;

	std::cout << m_display->menu["rules1"].asString() << std::endl;
	std::cout << m_display->menu["rules2"].asString() << std::endl;
	std::cout << m_display->menu["rules3"].asString() << std::endl;

	system("pause");
}
