#include "SFML/Graphics.hpp"
class Square
{
public:
	Square(sf::Vector2f position);
	sf::Vector2f m_position;
	bool m_hit;
};

