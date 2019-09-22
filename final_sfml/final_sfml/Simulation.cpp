#include "Simulation.h" //���������� .h ���� ����� ���������

Simulation::Simulation() {
	window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Mult");  //�������� �������� ����
	time = 0; //�������� �����
}

Simulation::~Simulation() {
	delete window;   //�������� ���� �� ������
}

void Simulation::run() {
	while (window->isOpen()) {   // ���� ������� ����, ��������� ��� ��� ������
		processEvents();		//������������ �������
		update();             //��������� 
		render();          //������ 
	}
}

void Simulation::processEvents() {
	sf::Event event;
	while (window->pollEvent(event)) {
		if (event.type == sf::Event::Closed)    //���� ������ �������, �� ���� �����������
			window->close();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))  //���� ������ �� escape �� ���� �����������
			window->close();
	}
}

void Simulation::update() {
	time = clock.getElapsedTime().asMicroseconds(); // �������� ����� �� ����� � �������������
	clock.restart(); //������������� ����
	time = time / 800;  // ����� ����� �� 800 ����� �� ������ ����

	person.animation(time);   //��������� ��������� �� �������
}

void Simulation::render() {
	window->clear();	  //������ ����
	window->draw(background.getSprite());  //������ ���
	window->draw(person.getSprite());	 // ������ ���������
	window->display(); // ���������� ��� �� ������
}
