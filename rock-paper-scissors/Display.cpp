#include "Display.hpp"

Display::Display()
{
	changeLanguage(2);

	// std::cout << "Construction of the Display class : " << this << std::endl;
	// system("pause");
}

Display::~Display()
{
	// std::cout << "Destruction of the Display class : " << this << std::endl;
	// system("pause");
}

void Display::changeLanguage(int language)
{
	switch (language)
	{
	case 1:
		parseFiles("english");
		break;

	case 2:
		parseFiles("french");

	default:
		break;
	}
}

void Display::parseFiles(std::string language)
{
	general.clear();
	menu.clear();
	game.clear();
	settings.clear();

	for (int i = 0; i < 4; i++)
	{
		fileDirectory = "translate/" + files[i] + language + ".json";

		switch (i)
		{
		case 0:
			language_file.open(fileDirectory);
			reader.parse(language_file, general);
			language_file.close();
			break;

		case 1:
			language_file.open(fileDirectory);
			reader.parse(language_file, menu);
			language_file.close();
			break;

		case 2:
			language_file.open(fileDirectory);
			reader.parse(language_file, game);
			language_file.close();
			break;

		case 3:
			language_file.open(fileDirectory);
			reader.parse(language_file, settings);
			language_file.close();
			break;

		default:
			break;
		}
	}
}