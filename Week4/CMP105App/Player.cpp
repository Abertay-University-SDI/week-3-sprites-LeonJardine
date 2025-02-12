#include "Player.h"

Player::Player()
{
	setPosition(sf::Vector2f(10, 10));
	setSize(sf::Vector2f(100, 100));

	mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&mushroom);
	setVelocity(0.f, 0.f);
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W)) 
	{
		setVelocity(getVelocity().x, getVelocity().y - 0.00001);
	}
	if (input->isKeyDown(sf::Keyboard::A))
	{
		setVelocity(getVelocity().x - 0.00001,getVelocity().y);
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		setVelocity(getVelocity().x,getVelocity().y + 0.00001);
	}
	if (input->isKeyDown(sf::Keyboard::D))
	{
		setVelocity(getVelocity().x + 0.00001,getVelocity().y);
	}

}

void Player::update(float dt) 
{
	move(velocity);
}