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
            Unit* newUunit = nullptr;

			switch (switcher)
			{
			case 1: {
                newUunit = new Alexmak();
				break;
			}
			case 2: {
                newUunit = new Loner();
				break;
			}
			case 3: {
                newUunit = new Warrior();
				break;
			}
			case 4:{
                newUunit = new Edgar();
				break;
			}
			case 5:{
                newUunit = new terminator();
				break;
			}
			case 6: {
                newUunit = new Xela();
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
            if (newUunit != nullptr) {
                arena.AddUnit(newUunit);
                std::cout << newUunit->getUnitName() << " added.\n";
                std::cin.ignore().get();
            }
			break;
		}
		case 2:
			system(CLEAR);
			std::cout << "Let's begin!\n";
            std::cin.ignore().get();
			arena.StartWorking();
            std::cin.ignore().get();
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
