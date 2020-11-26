#pragma once
#include "CAquatory.h"
#include "CShip.h"
#include <vector>

#include "winsock2.h" 

class CBattlePlayer
{
public:
	CBattlePlayer();
	~CBattlePlayer();

	CAquatory m_Aqua; //акуватория игрока
	vector <CShip*> m_Ships; //массив с кораблями игрока

	SOCKET m_sock; //сокет игрока
	DWORD WINAPI PrepareShips(); 
	bool ShipsAreReady();
	bool DoMove();

	bool Try2PlaceShip(string ship);
	void Message(string str); //отправка сооющения str клиенту

	string recieve(); //ответ от клиента

	CBattlePlayer *m_pAnotherPlayer; //противник

	bool IsAlive();
};

