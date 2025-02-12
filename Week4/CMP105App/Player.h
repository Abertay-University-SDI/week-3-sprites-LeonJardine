#pragma once
#include "Framework/GameObject.h"
using namespace std;
class Player : public GameObject
{
public:
	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);

	sf::Texture mushroom;
	Input in;
};

