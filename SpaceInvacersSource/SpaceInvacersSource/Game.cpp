#include "Game.h"
#include "utils.h"


Game::Game()
{
	window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);

}

void Game::Loop()
{
	while (window->isOpen())
	{
		// handle events
		sf::Event event;

		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:

				break;

			default:
				break;
			}
		}
		window->clear();

		// draw SFML content
		window->display();
	}
}