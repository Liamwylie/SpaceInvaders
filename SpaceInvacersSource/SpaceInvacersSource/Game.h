#pragma once

#include <SFML/Graphics.hpp>


class Game
{
public:
	Game();
	void Loop();

private:
	sf::RenderWindow *window;

};

