#include "Game.h"



Game::Game(): m_window(sf::VideoMode(800, 480), "Battleship")
{
}


Game::~Game()
{
}

void Game::run()
{
	initialise();
	while (true)
	{
		update();
		draw();
	}
}
void Game::initialise()
{
	info = player.inputLogin();
	player.userID = server.checkUsername(info.userName);


}
void Game::update()
{

}

void Game::draw()
{
	m_window.clear(sf::Color::Black);

	m_window.display();
}
