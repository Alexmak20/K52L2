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
	queue<Unit> arenaQueue;												//	Очередь на бой
	queue<Unit> duel;													//	Текущий бой
	int currentRound = 0;												//	Текущий раунд
	bool isFirstPlayerTurn = true;										//	Ходит первый игрок?

public:
	Arena();
	~Arena();


	void AddUnit(Unit &unit);											//	Добавление юнита в очередь арены

	void StartDuel();													//	Старт дуэли
	void StartWorking();												//	Старт арены: Основной рабочий цикл

	//	Messages
	static void MESSAGE_DUEL_STARTS(queue<Unit> _duel);					//	Сообщение о начале дуэли
	static void MESSAGE_ARENA_STARTS(queue<Unit> _arenaQueue);			//	Сообщение о начале работы арены
	static void MESSAGE_DUEL_ENDS(queue<Unit> _duel, bool isFirstWin);	//	Сообщение об окончании дуэли с выводом результатов

};


