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
		//	��������� ����� ���� ����� � �������� ��� ����� Do(���� ��������)
		if (isFirstPlayerTurn) duel.front().Do(duel.back());
		else duel.back().Do(duel.front());
		currentRound++;	//	������� �������
		isFirstPlayerTurn = !isFirstPlayerTurn;	// �������� ��� ������� ������
	}
	if (duel.front().getHealth() <= 0) { std::cout << "duel.back().getName" << " Wins" << std::endl; }
}


void Arena::StartWorking()
{
	while (true)
	{
		if (arenaQueue.size() > 1)
		{
			//	��������� ���� ������ �� ������� �� �����
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