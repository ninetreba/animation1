#pragma once

#include <SFML/Graphics.hpp> //���������� ���������� SFML

//����� ������ ���������//
class Person {
private:
	sf::Texture texture;		//�������� ���������
	sf::Sprite sprite;    //������ ���������
	float CurrentFrame;	//������� ����, ����� ����������� ���������

public:
	Person();  //����������� 

	void animation(float time);  //����� �������� ��������� �� �������
	sf::Sprite getSprite();//���������� ������ ���������
};
