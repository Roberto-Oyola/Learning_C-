// PruebaAprendizajeC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Game.h"
#include <vector>

int main()
{
    //std::cout << "Hello World!\n";

	#pragma region Declaraciones
	/*int age = 25;
	float money = 67.67f;
	double distance = 123.456789;
	bool active = true;
	std::string name = "Roberto Oyola";*/
	#pragma endregion

	#pragma region Concatenar
	/*std::cout << name << " " << age << "\n";
	std::cout << name << " " << age;
	std::cout << age << "\n";*/
	#pragma endregion

	#pragma region Clase y constructor
	/*Game juego;
	juego.name = "The Legend of Zelda: Breath of the Wild";
	juego.year = 2017;
	juego.showInfo();*/

	//Game game("The Legend of Zelda: Breath of the Wild", 2017);
	#pragma endregion

	#pragma region Listas y foreach
	/*std::vector<Game> games;
	games.push_back(game);

	for (Game& game : games)
	{
		game.showInfo();
	}*/
	#pragma endregion

	#pragma region Puesta en practica
	/*Game juego1("The Legend of Zelda: Breath of the Wild", 2017, "Nintendo Switch");
	Game juego2("Super Mario Odyssey", 2017, "Nintendo Switch");

	std::vector<Game> games;
	games.push_back(juego1);
	games.push_back(juego2);

	std::cout << "=== Game Database ===\n\n";

	for (Game& game : games)
	{
		game.showInfo();
	}*/
	#pragma endregion

	int number = 25;

	std::cout << "el numero es " << number << " y la direccion es " << &number << "\n";

	int* pointer = &number;

	std::cout << "el pointer apunta a: " << pointer << "\n";

	*pointer = 50;

	std::cout << "el numero ahora es " << number << " modificado desde el pointer\n";

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
