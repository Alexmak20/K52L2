#include <iostream>
#include <locale.h>
#include "Arena.h"
#include "Alexmak.h"
#include "Loner.h"
#include "Warrior.h"
#include "Menu.h"
#include "Edgar.h"
#include "terminator.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	Menu mainMenu;
	Arena arena;

	int switcher = 0;
	bool exited = 0;

	while (!exited) {
		system("cls");
		mainMenu.stdWelcome();

		std::cin >> switcher;

		switch (switcher)
		{
		case 1:
		{
			system("cls");
			mainMenu.stdChooseHero();

			std::cin >> switcher;

			switch (switcher)
			{
			case 1: {
				Alexmak newUunit;
				arena.AddUnit(&newUunit);
				std::cout << newUunit.getUnitName() << " added.\n";
				system("pause");
				break;
			}
			case 2: {
				Loner newUunit;
				arena.AddUnit(&newUunit);
				std::cout << newUunit.getUnitName() << " added.\n";
				system("pause");
				break;
			}
			case 3: {
				Warrior newUunit;
				arena.AddUnit(&newUunit);
				std::cout << newUunit.getUnitName() << " added.\n";
				system("pause");
				break;
			}
			case 4:{
				Edgar newUunit;
				arena.AddUnit(&newUunit);
				std::cout << newUunit.getUnitName() << " added.\n";
				system("pause");
				break;
			}
			case 5:{
				terminator newUunit;
				arena.AddUnit(&newUunit);
				std::cout << newUunit.getUnitName() << " added.\n";
				system("pause");
				break;
			}
			case 0:
				break;
			default:
				system("cls");
				std::cout << "Inccorrect input. Try again!\n";
				system("pause");
				break;
			}
			break;
		}
		case 2:
			system("cls");
			std::cout << "Let's begin!\n";
			system("pause");
			arena.StartWorking();
			break;
		case 3:
			system("cls");
			std::cout << "Our brave heroes: \n";
			//TODO arena show heroes
			break;
		case 0:
			system("cls");
			std::cout << "Goodbye, goodluck!\n";
			exited = true;
			break;
		default:
			system("cls");
			std::cout << "Inccorrect input. Try again!\n";
			system("pause");
			break;

		}
	}

	system("pause");
	return 0;
}
