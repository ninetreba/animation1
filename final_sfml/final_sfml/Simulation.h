#pragma once

#include <SFML/Graphics.hpp>    //���������� ���������� sfml
#include "Person.h"             // ���������� ������ ���������
#include "BackGround.h"        //���������� ���

//����� ����� ��������� ���������//
class Simulation {
private:
	sf::RenderWindow* window;		//������� ����������� ����
	Person person;					//��� ��������
	BackGround background;         //������ ���
	float time;                   // ����� ��� ��������
	sf::Clock clock;               // ���� ��� ������� �������

	void processEvents(); //����� ��� �������� �������
	void update();    //����� ��� ���������� ���������
	void render();   //����� ��� ���������

public:
	Simulation();    //�����������
	~Simulation();

	void run();        //����� ��� ������� ���������		
};

