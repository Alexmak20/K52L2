#include "Arena.h"
#include "unit.h"



Arena::Arena()
{
}


Arena::~Arena()
{
}


void Arena::StartDuel()
{
	currentRound = 0;
	isFirstPlayerTurn = true;
	while (duel.front().getHealth() > 0 && duel.back().getHealth() > 0)
	{
		//	Проверяем какой юнит ходит и вызываем его метод Do(юнит споерник)
		if (isFirstPlayerTurn) duel.front().Do(duel.back());
		else duel.back().Do(duel.front());
		currentRound++;	//	Счетчик раундов
		isFirstPlayerTurn = !isFirstPlayerTurn;	// Передаем ход другому игроку
	}
	if (duel.front().getHealth() <= 0) { std::cout << "duel.back().getName" << " Wins" << std::endl; }
}


void Arena::StartWorking()
{
	while (true)
	{
		if (arenaQueue.size() > 1)
		{
			//	Добавляем двух бойцов из очереди на дуэль
			duel.push(arenaQueue.front());
			arenaQueue.pop();
			duel.push(arenaQueue.front());
			arenaQueue.pop();
			StartDuel();
		}
	}
}


void Arena::AddUnit(Unit& _unit)
{
	arenaQueue.push(_unit);
}