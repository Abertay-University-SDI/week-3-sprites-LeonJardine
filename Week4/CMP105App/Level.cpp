#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	p.setInput(in);
	bg.setInput(in);
	c.setInput(in);
	e.setWindow(hwnd);
	bg.setWindow(hwnd);

	window->setMouseCursorVisible(false);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	p.handleInput(dt);
	bg.handleInput(dt);
	c.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	p.update(dt);
	e.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(bg);
	window->draw(p);
	window->draw(e);
	window->draw(c);

	endDraw();
}
