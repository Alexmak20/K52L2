#include <iostream>
#include "Arena.h"


using namespace std;


int main()
{

	//
	// Arena* arena;
	// arena = new Arena();


	std::cout << "Welcome!" << " Choose a menu: /n"
		<< "1 - Add new Hero to epic Arena /n"
		<< "2 - Start epic Arena /n"
		<< "0 - Exit from the depths of hell/n"
		<< endl;

	int switcher = 0; std::cin >> switcher;
	switch (switcher)
	{
	case 1:
		break;
	case 2:
		break;
	case 0:
		break;
	default:
		break;
	}


	return 0;
}
