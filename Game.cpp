#include <iostream>
#include "Game.h"

Game::Game(std::string name, int year)
	: name(name), year(year)
{
}

void Game::showInfo()
{
	std::cout << name << " " << year << "\n";
}
