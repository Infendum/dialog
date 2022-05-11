MyVector.h

#pragma once

constexpr auto PAGE_SIZE = 5;
constexpr auto MAX_ELEM_PER_PAGE(size_t tsize) { return (tsize / PAGE_SIZE + 1) * PAGE_SIZE; }

template <class T>
class MyVector
{
private:
	T* array_buffer;
	size_t size;
public:
	//Конструкторы
	MyVector();
	MyVector(const size_t size);
	// Копирование
	MyVector(const MyVector& obj);
	MyVector<T>& operator= (const MyVector<T>& obj);
	// Перенос
	MyVector(const MyVector&& obj);
	MyVector<T>& operator= (MyVector<T>&& obj);

	MyVector<T>& operator+= (MyVector<T>& obj);
	T operator[](size_t count);

	bool empty() const; // Проверяет заполнен ли вектор.
	const size_t csize() const; // Возвращает количество данных.
	size_t max_size() const; // Возвращает количество данных до перевыделения памяти.
	void resize(const size_t size); // Изменяет размер массива и данных.
	void erase(); // Очищает данные из массива.
	void swap(MyVector<T>& obj); // Обменивает данные в объектах.

	void push_back(const T& data); // Добавления нового элемента в конец вектора
	void pop_back(); // Удалить последний элемент

	void push_front(const T& data); // Добавления нового элемента в начало вектора
	void pop_front(); // Удалить первый элемент

	// Оператор потока
	template <class U>
	friend std::ostream& operator<< (std::ostream& os, const MyVector<U>& obj);

	~MyVector(); // Деструктор
};

template<class T>
inline MyVector<T>::MyVector()
{
	array_buffer = 0;
	size = 0;
}

template<class T>
inline MyVector<T>::MyVector(const size_t size)
{
	this->size = size;
	this->array_buffer = new int[this->size];
}

template<class T>
inline MyVector<T>::MyVector(const MyVector& obj)
{
	this->array_buffer = new int[obj.size];
	for (auto i = 0; i < obj.size; i++) {
		this->array_buffer[i] = obj.array_buffer[i];
	}
}

template<class T>
inline MyVector<T>& MyVector<T>::operator=(const MyVector<T>& obj)
{
	// TODO: вставьте здесь оператор return
	this->size = obj.size;
	if (this->array_buffer) {
		delete[] this->array_buffer;
	}
	this->array_buffer = new int[obj.size];
	for (auto i = 0; i < obj.size; i++) {
		this->array_buffer[i] = obj.array_buffer[i];
	}
	return *this;
}

template<class T>
inline MyVector<T>::MyVector(const MyVector&& obj)
{

	this->size = obj.size;
	this->array_buffer = obj.array_buffer;
	obj.array_buffer = nullptr;
}

template<class T>
inline MyVector<T>& MyVector<T>::operator=(MyVector<T>&& obj)
{
	// TODO: вставьте здесь оператор return
	this->size = obj.size;
	if (this->array_buffer) {
		delete[] this->array_buffer;
	}
	this->array_buffer = obj.array_buffer;
	obj.array_buffer = nullptr;
	return *this;
}

template<class T>
inline MyVector<T>& MyVector<T>::operator+=(MyVector<T>& obj)
{
	// TODO: вставьте здесь оператор return

}

template<class T>
inline const size_t MyVector<T>::csize() const
{
	/*return size_t();*/
	return size_t(array_buffer[]);
}

template<class T>
inline void MyVector<T>::erase()
{
	this->array_buffer[0];
}

template<class T>
inline void MyVector<T>::swap(MyVector<T>& obj)
{
	char* array_buffer1 = nullptr;
	strcpy_s(array_buffer1, strlen(this->array_buffer) + 1, array_buffer);
	strcpy_s(this->array_buffer, strlen(this->array_buffer) + 1, array_buffer);
}

template<class T>
inline void MyVector<T>::push_back(const T& data)
{
	this->size = strlen(this->array_buffer);
	this->array_buffer[size + 2] = '\0';
}

template<class T>
inline void MyVector<T>::pop_back()
{
	this->size = strlen(this->array_buffer);
	this->array_buffer[size - 2] = '\0';
}

template<class T>
inline void MyVector<T>::pop_front()
{
	this->size = strlen(this->array_buffer);
	this->array_buffer[]
}

template<class T>
inline MyVector<T>::~MyVector()
{
	delete[] array_buffer;
}

template<class U>
inline std::ostream& operator<<(std::ostream& os, const MyVector<U>& obj)
{
	// TODO: вставьте здесь оператор return
	for (auto i = 0; i < obj.size; i++) {
		os << obj.array_buffer[i] << " ";
	}
	return os;
}


main



#include <iostream>
#include "MyVector.h"
#include <array>

int main()
{
	MyVector<int> first, second;

	for (size_t i = 0; i < 10; i++)
	{
		first.push_front(i);
		second.push_back(i);
	}
	std::cout << first << std::endl << second << std::endl << std::endl;

	first += second;
	std::cout << first << std::endl << second << std::endl << std::endl;

	for (size_t i = 0; i < 3; i++)
		first.pop_back();
	std::cout << first << std::endl << second << std::endl << std::endl;

	for (size_t i = 0; i < 3; i++)
		first.pop_front();
	std::cout << first << std::endl << second << std::endl << std::endl;

	std::cout << first.csize() << std::endl << first.max_size() << std::endl << std::endl;

	first.resize(6);
	std::cout << first << std::endl << second << std::endl << std::endl;

	second.resize(15);
	std::cout << first << std::endl << second << std::endl << std::endl;

	first.erase();
	std::cout << first << std::endl << second << std::endl << std::endl;

	second += first;
	first.swap(second);
	std::cout << first << std::endl << second << std::endl << std::endl;

	return 0;
}
