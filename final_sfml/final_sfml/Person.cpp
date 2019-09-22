#include "Person.h" // ���������� .h ���� ������ ���������

Person::Person() {
	texture.loadFromFile("person.jpg"); //��������� ��������
	sprite.setTexture(texture); //������� ������ �� ��������
	sprite.setTextureRect(sf::IntRect(0, 0, 225, 386)); // ������������� ��������� ���� ���������
	sprite.setPosition(500, 200); // ������������� ������� ��������� �� ������
	CurrentFrame = 0;  //�������� ������� ����
}



sf::Sprite Person::getSprite() {
	return sprite;  //���������� ������ ���������
}
void Person::animation(float time) {

	/* ���� �������� �������, �� ���������� � �������� ����� �����.
	���� ������� ���� ������ 4/2 , �� ����������(�.� � ��� ����� 4/2 ��������)
	������������� ��� ���� ���������
	*/
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 4) CurrentFrame -= 4;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame), 0, 225, 380));
	sprite.setPosition(sprite.getPosition().x + 0.2, sprite.getPosition().y);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 4) CurrentFrame -= 4;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame)+225, 0, -225, 355));
		sprite.setPosition(sprite.getPosition().x - 0.2, sprite.getPosition().y);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 4) CurrentFrame -= 4;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame), 774, 225, 386));
		sprite.setPosition(sprite.getPosition().x + 0.5, sprite.getPosition().y);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 4) CurrentFrame -= 4;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame)+225, 0, -225, 386));
		sprite.setPosition(sprite.getPosition().x - 0.5, sprite.getPosition().y);
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 2) CurrentFrame -= 2;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame), 1160, 225, 352));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 2) CurrentFrame -= 2;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame), 386, 230, 386));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		CurrentFrame += 0.005 * time;
		if (CurrentFrame > 2) CurrentFrame -= 2;
		sprite.setTextureRect(sf::IntRect(225 * int(CurrentFrame)+255, 1160, -225, 352));
	}


}
