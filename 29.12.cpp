задание номер 2
  
  #include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 15;
	int n;
	int distance = 0;
	std::cout << "Введите число" << std::endl;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		distance = distance + ( 2 * i + a);
		std::cout << distance << std::endl;
	}

}
задание номер 3
	int arr[10];
	for (int i = 0; i < 10; i++) {
		int num = rand();
		if (i == 0) {
			
			arr[i] = num % 2 == 1 ? num : num + 1;
		}
		else {
			arr[i] = num;
		}
	
		std::cout << arr[i] << std::endl;
	}

	int j = 0;
	int sum = 0;
	while (arr[j] % 2 == 1) {
		sum += arr[j];
		j++;

	}

	std::cout << sum << std::endl;
}

задание номер 6,9
	srand(4784);
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();
		std::cout << arr[i] << std::endl;

	}

	int min = arr[0];
	int max = arr[0];
	
	for (int i = 1; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	std::cout << min << std::endl;

	
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	std::cout << max << std::endl;
























	srand(4784);
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();
		std::cout << arr[i] << std::endl;

	}

	int min = arr[0];
	int max = arr[0];
	
	for (int i = 1; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	std::cout << min << std::endl;

	
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	std::cout << max << std::endl;

	int sum = 0;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		if (arr [i] != min && max) {
			sum += arr[i];
			count++;
		}
	}
	int total = sum / count;
	std::cout << total << std::endl;
