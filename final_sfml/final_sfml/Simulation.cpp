#include "Simulation.h" //подключаем .h файл нашей симуляции

Simulation::Simulation() {
	window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Mult");  //Создание главного окна
	time = 0; //обнуляем время
}

Simulation::~Simulation() {
	delete window;   //удаление окна из памяти
}

void Simulation::run() {
	while (window->isOpen()) {   // пока открыто окно, выполняем все эти методы
		processEvents();		//обрабатываем события
		update();             //обновляем 
		render();          //рисуем 
	}
}

void Simulation::processEvents() {
	sf::Event event;
	while (window->pollEvent(event)) {
		if (event.type == sf::Event::Closed)    //если нажали закрыть, то окна закрываются
			window->close();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))  //если нажали на escape то окна закрываются
			window->close();
	}
}

void Simulation::update() {
	time = clock.getElapsedTime().asMicroseconds(); // получаем время от часов в микросекундах
	clock.restart(); //перезапускаем часы
	time = time / 800;  // делим время на 800 чтобы не быстро было

	person.animation(time);   //анимируем персонажа от времени
}

void Simulation::render() {
	window->clear();	  //чистим окно
	window->draw(background.getSprite());  //риусем фон
	window->draw(person.getSprite());	 // рисуем персонажа
	window->display(); // отображаем все на экране
}
