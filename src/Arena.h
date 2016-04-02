#pragma once

#include <iostream>
#include <stdio.h>

#include <queue>
#include <iterator>

#include "unit.h"


using namespace std;

class Arena
{
private:
	queue<Unit> arenaQueue;	//	������� �� ���
	queue<Unit> duel;	//	������� ���
	int currentRound = 0;	//	������� �����
	bool isFirstPlayerTurn = true;	//	����� ������ �����?

public:
	Arena();
	~Arena();


	void AddUnit(Unit &unit);	//	���������� ����� � ������� �����

	void StartDuel();	//	����� �����
	void StartWorking();	//	����� �����: �������� ������� ����

};

