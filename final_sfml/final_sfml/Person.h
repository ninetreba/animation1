#pragma once

#include <SFML/Graphics.hpp> //подключаем библиотеку SFML

//Класс нашего персонажа//
class Person {
private:
	sf::Texture texture;		//текстура персонажа
	sf::Sprite sprite;    //спрайт персонажа
	float CurrentFrame;	//текущий кадр, чтобы анимировать персонажа

public:
	Person();  //конструктор 

	void animation(float time);  //метод анимации персонажа от времени
	sf::Sprite getSprite();//возвращаем спрайт персонажа
};
