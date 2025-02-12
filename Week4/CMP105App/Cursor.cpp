#include "Cursor.h"

Cursor::Cursor()
{
	icon.loadFromFile("gfx/icon.png");
	setTexture(&icon);

	setSize(sf::Vector2f(48, 48));
}

void Cursor::handleInput(float dt)
{
	float mouseX = input->getMouseX();
	float mouseY = input->getMouseY();

	setPosition(mouseX - 24, mouseY - 24);
}
