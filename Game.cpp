#include <iostream>
#include "Game.h"

Game::Game(std::string name, int year, std::string plataform)
	: name(name), year(year), plataform(plataform)
{
}

void Game::showInfo() const
{
	std::cout << "Game:" << " " << name << "\n";
	std::cout << "Year:" << " " << year << "\n";
	std::cout << "Plataform:" << " " << plataform << "\n\n";
}
