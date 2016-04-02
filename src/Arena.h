#pragma once

#include <iostream>
#include <stdio.h>

#include <list>
#include <iterator>

using namespace std;

class Arena
{
private:
	list<int> Queue;	//	������� �� ���
	list<int> Duel;	//	������� ���
	int currentRound;	//	������� �����

public:
	Arena();
	~Arena();


	void addUnit();
	void startWorking();

};

