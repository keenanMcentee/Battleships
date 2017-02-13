#include "Square.h"
class Board
{
public:
	Board(int width, int height);
	~Board();
	int m_width;
	int m_height;
	std::vector<Square> square;
	Square tempSquare;
};

