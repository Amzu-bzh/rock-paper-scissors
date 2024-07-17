#ifndef settings_hpp
#define settings_hpp

#include <iostream>

#include "Display.hpp"

class Settings
{
public:
	Settings(Display *display);
	~Settings();

	int mainScreen();

private:
	void languageScreen();

	Display* s_display;
};

#endif // !settings_hpp
