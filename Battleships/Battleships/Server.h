#include "SFML/Graphics.hpp" 
struct ServerInfo
{
	std::string userName = "test";
	int userId = 0001;
};

class Server
{
public:
	Server();
	int checkUsername(std::string userName);
	int makeUser(std::string userName);
	ServerInfo userInfo;
};

