#pragma once

#include <SFML/Graphics.hpp>    //подключаем библиотеку sfml
#include "Person.h"             // подключаем нашего персонажа
#include "BackGround.h"        //подключаем фон

//Класс самой симуляции персонажа//
class Simulation {
private:
	sf::RenderWindow* window;		//главное графическое окно
	Person person;					//Сам персонаж
	BackGround background;         //задний фон
	float time;                   // время для анимации
	sf::Clock clock;               // часы для отсчёта времени

	void processEvents(); //метод для проверки событий
	void update();    //метод для обновления симуляции
	void render();   //метод для отрисовки

public:
	Simulation();    //конструктор
	~Simulation();

	void run();        //метод для запуска симуляции		
};

