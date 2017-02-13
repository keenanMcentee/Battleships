#include "SFML/Graphics.hpp" 

struct userInfo
{
	std::string userName;
};


struct gameOptions
{
	int boardWidth = 2;
	int boardHeight = 2;
	int qtyShips = 2;
	int difficulty = 1;
};

class Player
{
public:
	Player();
	~Player();
	userInfo inputLogin();
	int userID;
};


