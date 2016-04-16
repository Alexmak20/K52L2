#include <iostream>
#include "Arena.h"
#include "Alexmak.h"
#include "Loner.h"
#include "Warrior.h"

using namespace std;


int main()
{

	//
	Arena arena;

	int switcher = 0;
	bool exited = 0;

	while (!exited) {
		system("cls");
		stdWelcome();

		std::cin >> switcher;

		switch (switcher)
		{
		case 1:
			system("cls");
			stdChooseHero();

			std::cin >> switcher;

			switch (switcher)
			{
			case 1:
				//Alexmak newUunit;
				//arena.AddUnit(newUunit);
				//std::cout << newUunit.getUnitName() << " added.\n";
				break;
			case 2:
				//Loner newUunit;
				//arena.AddUnit(newUunit);
				//std::cout << newUunit.getUnitName() << " added.\n";
				break;
			case 3:
				//Warrior newUunit;
				//arena.AddUnit(newUunit);
				//std::cout << newUunit.getUnitName() << " added.\n";
				break;
			case 0:
				continue;
				break;
			default:
				system("cls");
				std::cout << "Inccorrect input. Try again!\n";
				break;
			}
			break;
		case 2:
			system("cls");
			std::cout << "Let's begin!\n";
			arena.StartWorking();
			break;
		case 0:
			system("cls");
			std::cout << "Goodbye, goodluck!\n";
			exited = true;
			break;
		default:
			system("cls");
			std::cout << "Inccorrect input. Try again!\n";
			break;

		}
	}

	system("pause");
	return 0;
}

void stdWelcome()
{
	std::cout << "Welcome!" << " Choose a menu: \n"
		<< "1 - Add new Hero to epic Arena \n"
		<< "2 - Start epic Arena \n"
		<< "0 - Exit from the depths of hell \n"
		"Your choise: ";
}

void stdChooseHero()
{
	std::cout << "Choose your hero:\n" <<
		"1 - AlexMak\n" <<
		"2 - Loner\n" <<
		"3 - Warrior\n" <<
		"0 - Back\n" <<
		"Your choise: ";
}
