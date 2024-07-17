/// \file		Settings.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "Settings.hpp"

Settings::Settings(Display *display)
{
	s_display = display;

	// std::cout << "Construction of the Setings class : " << this << std::endl;
	// system("pause");
}

Settings::~Settings()
{
	// std::cout << "Destruction of the Settings class : " << this << std::endl;
	// system("pause");
}

int Settings::mainScreen()
{
	system("cls");

	std::cout << s_display->general["title"].asString() << std::endl;

	std::cout << s_display->settings["main"].asString();

	int choice; std::cin >> choice;

	switch (choice)
	{
	case 1:
		languageScreen();
		break;

	case 2:
		break;

	default:
		break;
	}

	return 0;
}

void Settings::languageScreen()
{
	system("cls");

	std::cout << s_display->general["title"].asString() << std::endl;

	std::cout << s_display->settings["language"].asString();

	int choice; std::cin >> choice;

	s_display->changeLanguage(choice);

	mainScreen();
}