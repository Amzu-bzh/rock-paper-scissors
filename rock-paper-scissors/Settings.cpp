/// \file		Settings.cpp
/// \author		@Amzu-bzh
/// \project	rock-paper-scissors

#include "Settings.hpp"

Settings::Settings()
{
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

	std::cout << text["title"].asString() << std::endl;

	std::cout << text["main"].asString();

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

	std::cout << text["title"].asString() << std::endl;

	std::cout << text["language"].asString();

	int choice; std::cin >> choice;

	iSettingsFile.open("settings.json");
	reader.parse(iSettingsFile, settings);
	iSettingsFile.close();

	switch (choice)
	{
	case 1:
		settings["language"] = "english";
		break;

	case 2:
		settings["language"] = "french";
		break;

	default:
		break;
	}

	std::string settingsFileContent = writer.write(settings);
	oSettingsFile.open("settings.json");
	oSettingsFile << settingsFileContent;
	oSettingsFile.close();
}