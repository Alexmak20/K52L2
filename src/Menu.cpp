#include <stdio.h>
#include <iostream>>

#include "Menu.h"

Menu::Menu()
{

}

Menu::~Menu()
{

}

void Menu::stdWelcome()
{
	std::cout << "Welcome!" << " Choose a menu: \n"
		<< "1 - Add new Hero to epic Arena \n"
		<< "2 - Start epic Arena \n"
		<< "3 - Show registered heroes \n"
		<< "0 - Exit from the depths of hell \n"
		"Your choise: ";
}

void Menu::stdChooseHero()
{
	std::cout << "Choose your hero:\n"
		<< "1 - AlexMak\n"
		<<	"2 - Loner\n"
		<<	"3 - Warrior\n"
		<<	"4 - Edgar\n"
		<<	"5 - terminator\n"
		<<	"0 - Back\n"
		<<	"Your choise: ";
}