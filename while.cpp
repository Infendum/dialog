#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	std::cout << "Введите" << std::endl;
	std::cin >> n;
	int t1 = 0, t2 = 1, sum = 0;
	std::cout << t1 << ' ' << t2 << std::endl;

	while (sum <= n) {
		std::cout << sum << ' ' << std::endl;
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;
	}
	//for (int i = 1; i <= n; i++) {
	//	if (i == 1) {
	//		std::cout << t1 << ' ' << std::endl;
	//	}
	//	if (i == 2) {
	//		std::cout << t2 << ' ' << std::endl;
	//		continue;
	//	}

	//	
	//	
	//	sum = t1 + t2;
	//	std::cout << sum << ' ' << std::endl;

	//	t1 = t2;
	//	t2 = sum;
	//	sum <= n;

	//
	//
	//}
}
