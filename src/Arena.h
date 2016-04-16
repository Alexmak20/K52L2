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
    queue<Unit*> arenaQueue;											//	������� �� ���
    queue<Unit*> duel;													//	������� ���
	int currentRound = 0;												//	������� �����
	int numberOfDuels = 0;												//	Current number of fight on Arena
	bool isFirstPlayerTurn = true;										//	����� ������ �����?

public:
	Arena();
	~Arena();


    void AddUnit(Unit *unit);											//	���������� ����� � ������� �����

	void StartDuel();													//	����� �����
	void StartWorking();												//	����� �����: �������� ������� ����
	int getNumberOfDuels();

	//	Messages
    static void MESSAGE_DUEL_STARTS(queue<Unit*> _duel);					//	��������� � ������ �����
    static void MESSAGE_ARENA_STARTS();										//	��������� � ������ ������ �����
    static void MESSAGE_DUEL_ENDS(queue<Unit*> _duel, bool isFirstWin, int round);	//	��������� �� ��������� ����� � ������� �����������

};