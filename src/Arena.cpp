#include "Arena.h"
#include "unit.h"



Arena::Arena()
{
}


Arena::~Arena()
{
}


void Arena::ShowHeroes()
{
	queue<Unit*> temp = arenaQueue;

	if (temp.empty()) std::cout << "Arena is empty. Sorry\n";
	else
	{
		std::cout << "There are " << temp.size() << " brave hero(es):\n";
		while (!temp.empty())
		{
			std::cout << temp.front()->getUnitName() << " with attack " << temp.front()->getAttack() << endl;
			temp.pop();
		}
	}
}

void Arena::StartDuel()
{
	currentRound = 0;
	isFirstPlayerTurn = true;
    while (duel.front()->getHealth() > 0 && duel.back()->getHealth() > 0)
	{
		//	Проверяем какой юнит ходит и вызываем его метод Do(юнит споерник)
        if (isFirstPlayerTurn) duel.front()->Do(*duel.back());
		//TODO fix error in the line above
        else duel.back()->Do(*duel.front());
		currentRound++;	//	Счетчик раундов
		isFirstPlayerTurn = !isFirstPlayerTurn;	// Передаем ход другому игроку
	}
    if (duel.front()->getHealth() <= 0)
	{
		MESSAGE_DUEL_ENDS(duel, false, currentRound);
	}
	else
	{
		MESSAGE_DUEL_ENDS(duel, true, currentRound);
	}
}


void Arena::StartWorking()
{
	MESSAGE_ARENA_STARTS();
	while (arenaQueue.size() > 1)
	{
			//	Добавляем двух бойцов из очереди на дуэль
			duel.push(arenaQueue.front());
			arenaQueue.pop();
			duel.push(arenaQueue.front());
			arenaQueue.pop();
			MESSAGE_DUEL_STARTS(duel);
			StartDuel();
			numberOfDuels++;
	}
}

int Arena::GetNumberOfDuels()
{
	return Arena::numberOfDuels;
}

void Arena::MESSAGE_DUEL_STARTS(queue<Unit*> _duel)
{
    std::cout << "Дуэль между " << _duel.front()->getUnitName()
              << " и " << _duel.back()->getUnitName() << " началась!" << endl;
}

void Arena::MESSAGE_ARENA_STARTS()
{
    std::cout << "Арена начинает работу. Приглашаем вас всех героев, ищущих славы, проверить свои боевые навыки!";
}

void Arena::MESSAGE_DUEL_ENDS(queue<Unit*> _duel, bool isFirstWin, int round)
{
    std::cout << "Дуэль между " << _duel.front()->getUnitName()
              << " и " << _duel.back()->getUnitName()
              << " закончилась победой "
              << (isFirstWin ? _duel.front()->getUnitName() : _duel.back()->getUnitName())
                              << " в " << round << " раунде. Поздравляем!" << endl;
}


void Arena::AddUnit(Unit* _unit)
{
	arenaQueue.push(_unit);
}
