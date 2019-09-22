#pragma once

#include <SFML/Graphics.hpp>   //подключаем библиотеку SFML

//Класс для заднего фона//
class BackGround {
private:
	sf::Texture texture;   //текстура фона
	sf::Sprite sprite;    //спрайт фона
public:
	BackGround();        //конструктор класса

	sf::Sprite getSprite();   // метод для возвращения спрайта
};
