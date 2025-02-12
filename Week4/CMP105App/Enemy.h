#pragma once
#include "Player.h"
class Enemy : public Player
{
public:
	Enemy();
	void update(float dt);
	void setWindow(sf::RenderWindow* wnd);

	sf::Texture goomba;
	sf::RenderWindow* window;
};

