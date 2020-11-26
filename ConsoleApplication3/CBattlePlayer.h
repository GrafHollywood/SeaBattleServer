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

	CAquatory m_Aqua; //���������� ������
	vector <CShip*> m_Ships; //������ � ��������� ������

	SOCKET m_sock; //����� ������
	DWORD WINAPI PrepareShips(); 
	bool ShipsAreReady();
	bool DoMove();

	bool Try2PlaceShip(string ship);
	void Message(string str); //�������� ��������� str �������

	string recieve(); //����� �� �������

	CBattlePlayer *m_pAnotherPlayer; //���������

	bool IsAlive();
};

