#include "BackGround.h"   //���������� .h ���� ����

BackGround::BackGround() {
	texture.loadFromFile("background.png");	//��������� �������� � ��������
	sprite.setTexture(texture);          //������� ������ �� ��������
}

sf::Sprite BackGround::getSprite() {
	return sprite;         //���������� ������
}
