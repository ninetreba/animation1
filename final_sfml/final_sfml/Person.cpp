#include "Person.h" // подключаем .h файл нашего персонажа

Person::Person() {
	texture.loadFromFile("person.jpg"); //загружаем текстуру
	sprite.setTexture(texture); //создаем спарйт из текстуры
	sprite.setTextureRect(sf::IntRect(0, 0, 225, 386)); // устанавливаем начальный кадр персонажа
	sprite.setPosition(500, 200); // устанавливаем позицию персонажа на экране
	CurrentFrame = 0;  //обнул€ем текущий кадр
}



sf::Sprite Person::getSprite() {
	return sprite;  //возвращаем спрайт персонажа
}
void Person::animation(float time) {

	/* ≈сли зажимаем клавишу, то прибавл€ем к текущему кадру врем€.
	≈сли текущий кадр больше 4/2 , то сбрасываем(т.к у нас всего 4/2 картинки)
	”станавливаем сам кадр персонажа
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
