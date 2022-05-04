
#include <iostream>
using namespace std;

template <typename MyType>
void printArray(const MyType* array, int count)
{
	for (int ix = 0; ix < count; ix++)
		cout << array[ix] << "   ";
	cout << endl;
}

template <typename T>
int funcmax(const T* array, int count) {
    T max = 0;

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            max = array[i];
            
        }
        if (array[i] > max)
        {
            max = array[i];
        }
       
    }
    return max;
}

template <typename min>
int funcmin(const min* array, int count) {
    min minmas = 0;

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            minmas = array[i];

        }
        if (array[i] < minmas)
        {
            minmas = array[i];
        }

    }
    return minmas;
}

template <typename sort>
sort funcsort(sort* array, int count) {
    sort temp;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return *array;
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	// размеры массивов
	const int iSize = 10;

	// массивы разных типов данных
	int    iArray[iSize] = { 1, 2, 3, 4, 5, 11, 7, 8, 9, 10 };

	// вызов локальной версии функции printArray для типа int через шаблон
	cout << "\n Array type int:\n"; printArray(iArray, iSize);

    cout << "Наибольший элемент в массиве" << " " << funcmax(iArray, iSize) << std::endl;
    cout << "Наименьший элемент в массиве" << " " << funcmin(iArray, iSize) << std::endl;
    cout << "Сортировка" << " " << funcsort(iArray, iSize) << std::endl;

	return 0;
}
