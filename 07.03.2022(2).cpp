#include <iostream>
#include <Windows.h>



int krestik() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	

	std::cout << ' ' << '*' <<' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	return 0;
	
}

int nolik() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	return 0;

}



int vstav(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

	return 0;
}


//void gotoxy(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//}


void pole()
{
	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;
}


int main(void) 
{
	int a{ 0 }, u{ 0 };
	int b;
	int g;
	b = krestik();
	g = nolik();

	
	int j;
	std::cin >> a, u;
	gotoxy(a, u);
	
	j = vstav(a, u);
	std::cout << b << g << j << std::endl;
	
	
	return 0;
}