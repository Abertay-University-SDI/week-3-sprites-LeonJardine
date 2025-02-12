#pragma once
#include "Framework/GameObject.h"
class Cursor : public GameObject
{
public:
	Cursor();
	void handleInput(float dt) override;

	sf::Texture icon;
};

