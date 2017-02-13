#include "Board.h"



Board::Board(int width, int height) : tempSquare(sf::Vector2f(0,0))
{
	m_width = width;
	m_height = height;

	for (size_t i = width; i > 0; i--)
	{
		for (size_t j = height;  j > 0; j--)
		{
			tempSquare.m_position = sf::Vector2f(j, i);
			square.assign(((i+j) - (width + height)) * -1, tempSquare);
		}
		
	}
}


Board::~Board()
{
}
