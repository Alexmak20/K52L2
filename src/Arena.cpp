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
	while (duel.front().getHealth > 0 && duel.back().getHealth() > 0)
	{

	}
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