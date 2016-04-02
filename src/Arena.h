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
	queue<Unit> arenaQueue;	//	Очередь на бой
	queue<Unit> duel;	//	Текущий бой
	int currentRound = 0;	//	Текущий раунд
	bool isFirstPlayerTurn = true;	//	Ходит первый игрок?

public:
	Arena();
	~Arena();


	void AddUnit(Unit &unit);	//	Добавление юнита в очередь арены

	void StartDuel();	//	Старт дуэли
	void StartWorking();	//	Старт арены: Основной рабочий цикл

};

