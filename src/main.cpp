#include <iostream>
#include "Arena.h"


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
			<< endl;

		std::cin >> switcher;

		switch (switcher)
		{
		case 1:
			system("cls");
			std::cout << "Choose your hero:\n";


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
