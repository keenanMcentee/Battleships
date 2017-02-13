#include "Server.h"



Server::Server()
{
	
}
int Server::checkUsername(std::string userName)
{
	int id;
	if (userName == userInfo.userName)
	{
		id = userInfo.userId;
	}
	else
	{
		id =makeUser(userName);
	}
	return id;
}
int Server::makeUser(std::string userName)
{
	return 0002;
}