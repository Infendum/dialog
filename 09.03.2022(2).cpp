#include <iostream>
#include <Windows.h>



//int krestik() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	return 0;
//
//}
//
//int nolik() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	return 0;
//
//}



//int vstav(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//
//	return 0;
//}


//void gotoxy(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//}


void pole()
{

}


void gridold() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
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

	std::cout << "1  2  3" << std::endl;
	std::cout << "4  5  6" << std::endl;
	std::cout << "7  8  9" << std::endl;
	std::cout << "Для вывода крестика или нолика ваот кординат клеток 1(0,0) 2()" << std::endl;
}
void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}

//void winner(int x[3][3]) {
//	if (x[1][0] == x[1][1] && x[1][1] == x[1][2]) {
//		if (x[1][0] == 0) {
//
//
//			std::cout << "pobeda" << std::endl;
//		}
//		else if (x[1][0] == 1) {
//			std::cout << "pobeda" << std::endl;
//
//		}
//	}
//}

void cross(int coord)
{
	int x{ 0 }, y{ 0 };
	if (coord == 1) {
		x = 1;
		y = 0;
	}
	else if (coord == 2) {
		x = 8;
		y = 0;
	}
	else if (coord == 3) {
		x = 15;
		y = 0;
	}
	else if (coord == 4) {
		x = 1;
		y = 3;
	}
	else if (coord == 5) {
		x = 8;
		y = 3;
	}
	else if (coord == 6) {
		x = 15;
		y = 3;
	}
	else if (coord == 7) {
		x = 1;
		y = 6;
	}
	else if (coord == 8) {
		x = 8;
		y = 6;
	}
	else if (coord == 9) {
		x = 15;
		y = 6;
	}
	gotoxy(x, y);
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	gotoxy(x, y + 1);
	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
	gotoxy(x, y + 2);
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	
}
void gotoxy1(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}
void null(int coord)
{
	int x{ 0 }, y{ 0 };
	if (coord == 1) {
		x = 1;
		y = 0;
	}
	else if (coord == 2) {
		x = 8;
		y = 0;
	}
	else if (coord == 3) {
		x = 15;
		y = 0;
	}
	else if (coord == 4) {
		x = 1;
		y = 3;
	}
	else if (coord == 5) {
		x = 8;
		y = 3;
	}
	else if (coord == 6) {
		x = 15;
		y = 3;
	}
	else if (coord == 7) {
		x = 1;
		y = 6;
	}
	else if (coord == 8) {
		x = 8;
		y = 6;
	}
	else if (coord == 9) {
		x = 15;
		y = 6;
	}
	gotoxy(x, y);
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	gotoxy(x, y + 1);
	std::cout << ' ' << '*' << " " << '*' << ' ' << std::endl;
	gotoxy(x, y + 2);
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
}



void winner(int x[3][3]) {
	if (x[1][0] == x[1][1] && x[1][1] == x[1][2]) {
		if (x[1][0] == 0) {


			std::cout << "pobeda" << std::endl;
		}
		else if (x[1][0] == 1) {
			std::cout << "pobeda" << std::endl;

		}
	}
}


//void gotoxy2(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//
//
//
//}



int main(void)
{
	gridold();
	int a{ 0 }, u;
	int b;
	int g;
	int p;
	int l;
	int j[3][3];
	
	
	
	

	for (int i = 0; i < 10; i++) {
		std::cin >> a;
		
		winner(j);
		cross(a);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cin >> b;


		null(b);
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		/*j = vstav(a, u);*/
		
	
	}
	
	


	return 0;
}
