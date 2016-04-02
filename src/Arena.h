#pragma once

#include <iostream>
#include <stdio.h>

#include <list>
#include <iterator>

using namespace std;

class Arena
{
private:
	list<int> Queue;	//	Очередь на бой
	list<int> Duel;	//	Текущий бой
	int currentRound;	//	Текущий раунд

public:
	Arena();
	~Arena();


	void addUnit();
	void startWorking();

};

