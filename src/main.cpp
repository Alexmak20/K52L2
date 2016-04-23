#ifdef _WIN32
#define CLEAR "cls"
#else //In any other OS
#define CLEAR "clear"
#endif

#include <iostream>
#include <locale.h>
#include "Arena.h"
#include "Alexmak.h"
#include "Loner.h"
#include "Warrior.h"
#include "Menu.h"
#include "Edgar.h"
#include "terminator.h"
#include "Xela.h"


using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
	Menu mainMenu;
    Arena arena;

	int switcher = 0;
	bool exited = 0;

	while (!exited) {
		system(CLEAR);
		mainMenu.stdWelcome();

		std::cin >> switcher;

		switch (switcher)
		{
		case 1:
		{
			system(CLEAR);
			mainMenu.stdChooseHero();

			std::cin >> switcher;

			switch (switcher)
			{
			case 1: {
				Alexmak* newUunit = new Alexmak();
				arena.AddUnit(newUunit);
                std::cout << newUunit->getUnitName() << " added.\n";
                std::cin.ignore().get();
				break;
			}
			case 2: {
				Loner* newUunit = new Loner();
				arena.AddUnit(newUunit);
                std::cout << newUunit->getUnitName() << " added.\n";
                std::cin.ignore().get();
				break;
			}
			case 3: {
				Warrior* newUunit = new Warrior();
				arena.AddUnit(newUunit);
                std::cout << newUunit->getUnitName() << " added.\n";
                std::cin.ignore().get();
				break;
			}
			case 4:{
				Edgar* newUunit = new Edgar();
				arena.AddUnit(newUunit);
                std::cout << newUunit->getUnitName() << " added.\n";
                std::cin.ignore().get();
				break;
			}
			case 5:{
				terminator* newUunit = new terminator();
				arena.AddUnit(newUunit);
                std::cout << newUunit->getUnitName() << " added.\n";
                std::cin.ignore().get();
				break;
			}
			case 6: {
				Xela* newUunit = new Xela();
				arena.AddUnit(newUunit);
				std::cout << newUunit->getUnitName() << " added.\n";
				std::cin.ignore().get();
				break;
			}

			case 0:
				break;
			default:
                system(CLEAR);
                std::cout << "Inccorrect input. Try again!\n";
                std::cin.ignore().get();
				break;
			}
			break;
		}
		case 2:
			system(CLEAR);
			std::cout << "Let's begin!\n";
            std::cin.ignore().get();
			arena.StartWorking();
			break;
		case 3:
			system(CLEAR);
			std::cout << "Our brave heroes: \n";
			arena.ShowHeroes();
			std::cout << "Press any key for continie";
			std::cin.ignore().get();
			break;
		case 0:
			system(CLEAR);
			std::cout << "Goodbye, goodluck!\n";
			exited = true;
			break;
		default:
			system(CLEAR);
			std::cout << "Inccorrect input. Try again!\n";
            std::cin.ignore().get();
			break;

		}
	}

    std::cin.ignore().get();
	return 0;
}
