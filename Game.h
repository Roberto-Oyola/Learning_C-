#include <string>


class Game
{
	public:
		std::string name;
		int year;
		std::string plataform;

		Game(std::string name, int year, std::string plataform);
		void showInfo() const;
};