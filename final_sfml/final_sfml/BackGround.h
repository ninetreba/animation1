#pragma once

#include <SFML/Graphics.hpp>   //���������� ���������� SFML

//����� ��� ������� ����//
class BackGround {
private:
	sf::Texture texture;   //�������� ����
	sf::Sprite sprite;    //������ ����
public:
	BackGround();        //����������� ������

	sf::Sprite getSprite();   // ����� ��� ����������� �������
};
