#include <iostream>
#include "Arena.h"
#include "Alexmak.h"
#include "Loner.h"
#include "Warrior.h"
#include "Edgar.hpp"

using namespace std;


int main()
{

	//
	Arena arena;

	int switcher = 0;
	bool exited = 0;

	while (!exited) {
		system("cls");
		std::cout << "Welcome!" << " Choose a menu: \n"
			<< "1 - Add new Hero to epic Arena \n"
			<< "2 - Start epic Arena \n"
			<< "0 - Exit from the depths of hell \n"
			"Your choise: ";

		std::cin >> switcher;

		switch (switcher)
		{
		case 1:
			system("cls");
			std::cout << "Choose your hero:\n" <<
				"1 - AlexMak\n" <<
				"2 - Loner\n" <<
				"3 - Warrior\n" <<
                "4 - Edgar\n" <<
				"0 - Back\n" <<
				"Your choise: ";

			std::cin >> switcher;

			switch (switcher)
			{
			case 1:
				//arena.AddUnit(new Alexmak());
				break;
			case 2:
				//arena.AddUnit(new Loner());
				break;
			case 3:
				//arena.AddUnit(new Warrior());
				break;
			case 4:
                //arena.AddUnit(new Edgar());
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
