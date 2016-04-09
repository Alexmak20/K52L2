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
	queue<Unit> arenaQueue;												//	������� �� ���
	queue<Unit> duel;													//	������� ���
	int currentRound = 0;												//	������� �����
	bool isFirstPlayerTurn = true;										//	����� ������ �����?

public:
	Arena();
	~Arena();


	void AddUnit(Unit &unit);											//	���������� ����� � ������� �����

	void StartDuel();													//	����� �����
	void StartWorking();												//	����� �����: �������� ������� ����

	//	Messages
	static void MESSAGE_DUEL_STARTS(queue<Unit> _duel);					//	��������� � ������ �����
	static void MESSAGE_ARENA_STARTS(queue<Unit> _arenaQueue);			//	��������� � ������ ������ �����
	static void MESSAGE_DUEL_ENDS(queue<Unit> _duel, bool isFirstWin);	//	��������� �� ��������� ����� � ������� �����������

};


