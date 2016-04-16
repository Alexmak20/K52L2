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
    while (duel.front()->getHealth() > 0 && duel.back()->getHealth() > 0)
	{
		//	��������� ����� ���� ����� � �������� ��� ����� Do(���� ��������)
        if (isFirstPlayerTurn) duel.front()->Do(*duel.back());
		//TODO fix error in the line above
        else duel.back()->Do(*duel.front());
		currentRound++;	//	������� �������
		isFirstPlayerTurn = !isFirstPlayerTurn;	// �������� ��� ������� ������
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
			//	��������� ���� ������ �� ������� �� �����
			duel.push(arenaQueue.front());
			arenaQueue.pop();
			duel.push(arenaQueue.front());
			arenaQueue.pop();
			MESSAGE_DUEL_STARTS(duel);
			StartDuel();
			numberOfDuels++;
	}
}

int Arena::getNumberOfDuels()
{
	return Arena::numberOfDuels;
}

void Arena::MESSAGE_DUEL_STARTS(queue<Unit*> _duel)
{
    std::cout << "����� ����� " << _duel.front()->getUnitName()
              << " � " << _duel.back()->getUnitName() << " ��������!" << endl;
}

void Arena::MESSAGE_ARENA_STARTS()
{
    std::cout << "����� �������� ������. ���������� ��� ���� ������, ������ �����, ��������� ���� ������ ������!";
}

void Arena::MESSAGE_DUEL_ENDS(queue<Unit*> _duel, bool isFirstWin, int round)
{
    std::cout << "����� ����� " << _duel.front()->getUnitName()
              << " � " << _duel.back()->getUnitName()
              << " ����������� ������� "
              << (isFirstWin ? _duel.front()->getUnitName() : _duel.back()->getUnitName())
                              << " � " << round << " ������. �����������!" << endl;
}


void Arena::AddUnit(Unit* _unit)
{
	arenaQueue.push(_unit);
}
