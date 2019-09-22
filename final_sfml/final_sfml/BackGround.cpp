#include "BackGround.h"   //подключаем .h файл фона

BackGround::BackGround() {
	texture.loadFromFile("background.png");	//загружаем картинку в текстуру
	sprite.setTexture(texture);          //создаем спрайт из текстуры
}

sf::Sprite BackGround::getSprite() {
	return sprite;         //возвращаем спрайт
}
