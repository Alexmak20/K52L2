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
	else { std::cout << "duel.front().getName" << " Wins" << std::endl; }
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

void Arena::MESSAGE_DUEL_STARTS(queue<Unit> _duel)
{
	std::cout << "Дуэль между " << _duel.front << " и " << _duel.back << " началась!" << endl;
}

void Arena::MESSAGE_ARENA_STARTS(queue<Unit> _arenaQueue)
{
	std::cout << "Арена начинает работу. Приглашаем вас всех героев, ищущих славы, проверить свои боевые навыки!"
}

void Arena::MESSAGE_DUEL_ENDS(queue<Unit> _duel, bool isFirstWin)
{
	std::cout << "Дуэль между " << _duel.front << " и " << _duel.back << " закончилась победой " << isFirstWin ? _duel.front : _duel.back << ". Поздравляем!" << endl;
}


void Arena::AddUnit(Unit& _unit)
{
	arenaQueue.push(_unit);
}