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
    queue<Unit*> arenaQueue;											//	Очередь на бой
    queue<Unit*> duel;													//	Текущий бой
	int currentRound = 0;												//	Текущий раунд
	int numberOfDuels = 0;												//	Current number of fight on Arena
	bool isFirstPlayerTurn = true;										//	Ходит первый игрок?

public:
	Arena();
	~Arena();


    void AddUnit(Unit *unit);											//	Добавление юнита в очередь арены

	void StartDuel();													//	Старт дуэли
	void StartWorking();												//	Старт арены: Основной рабочий цикл
	void ShowHeroes();


	//	getters
	int GetNumberOfDuels();

	//	setters


	//	Messages
    static void MESSAGE_DUEL_STARTS(queue<Unit*> _duel);					//	Сообщение о начале дуэли
    static void MESSAGE_ARENA_STARTS();										//	Сообщение о начале работы арены
    static void MESSAGE_DUEL_ENDS(queue<Unit*> _duel, bool isFirstWin, int round);	//	Сообщение об окончании дуэли с выводом результатов

};