#include <string>


class Game
{
	public:
		std::string name;
		int year;

		Game(std::string name, int year);
		void showInfo() const;
};