s_list.h


#ifndef _s_list_h
#define _s_list_h

#include <iostream>

/**
Структура как элемент списка и хранения данных.
*/
template<class T>
struct node
{
	T data;			// Данные
	node<T>* next;	// Адрес следующего элемента списка
	node() : next(nullptr) {}
};

/**
Реализация класса итератора для организации доступа
к элементам контейнера.
*/
template<class T>
class s_iterator
{
	node<T>* ptr;
public:
	s_iterator() : ptr(nullptr) {}
	s_iterator(node<T>* ptr) : ptr(ptr) {}
	s_iterator& operator++() { ptr = ptr->next; return *this; }
	T& operator*() const { return ptr->data; }
	node<T> operator->() { return ptr; }
	bool operator!=(const s_iterator& obj) const { return ptr != obj.ptr; }
	~s_iterator() { ptr = nullptr; }
};

/**
Описание класса списка.
*/
template<class T>
class s_list {
	node<T>* first;									// адрес первого элемента списка
	node<T>* last;									// адрес последнего элемента списка
public:
	friend class s_iterator<T>;						// включение класса итератора
	s_list();										// конструктор по умолчанию
	s_list(const s_list<T>& obj);					// конструктор копирования
	s_list(s_list<T>&& obj);						// конструктор перемещения
	s_list<T>& operator=(const s_list<T>& obj);		// оператор равно копированием
	s_list<T>& operator=(s_list<T>&& obj);			// оператор равно перемещением
	T& operator[](size_t pos) const;				// оператор индексирования

	void add_to_head(const T& data);				// добавление элемента в начало 
	void add_to_tail(const T& data);				// добавление элемента в конец 
	T front() const;								// возвращает первое значение
	T back() const;									// возвращает последнее значение
	T delete_from_head();							// удаление первого элемента
	T delete_from_tail();							// удаление последнего элемента
	void delete_all();								// удаление всех элементов
	void show() const;								// отображение всех элементов
	size_t size() const;							// количество элементов

	s_iterator<T> begin() const;					// возвращает итератор на первый элемент
	s_iterator<T> end() const;						// возвращает итератор на элемент, следующий за последним

	void insert_at(size_t pos, const T& data);		// вставка в указанную позицию
	void delete_at(size_t pos);						// удаление по указанной позиции
	size_t find(const T& data) const;				// поиск элемента (NULL в случае неудачи)
	size_t find_and_replace(const T& data, const T& repl_data);	// поиск и замена всех элементов (возвращаем кол-во замен)
	void reverse();									// переворот списка

	void sort();									// сортирует элементы (вставками)
	void splice(s_list<T>& obj);					// перемещает элементы из другого list 

	~s_list();										// деструктор
private:
	void add_to_head(node<T>* ptr);					// добавляет ноду в голову списка
	void add_to_tail(node<T>* ptr);					// добавляет ноду в конец списка
};


template<class T>
inline void s_list<T>::insert_at(size_t pos, const T& data)
{

	size_t index{ 0 };
	node<T>* temp{ first };
	while (temp) {
		if (index == pos) {
			node<T>* newnode = new node<T>*();
			newnode->data = data;
			newnode->next = temp->next;
			temp->next = newmode;
			break;
		}
		index++;
		temp = temp->next;
	}

}

template<class T>
inline s_list<T>::s_list(): first(nullptr), last(nullptr)
{

}

template<class T>
inline s_list<T>::s_list(const s_list<T>& obj)
{
	this->data = new node<T>*(obj.data);
	for (auto i = 0; i < obj.data; i++) {
		this->data = obj.data;
	}
}

template<class T>
inline s_list<T>::s_list(s_list<T>&& obj)
{
	this->data = obj.data;
	this->next = obj.next;
	obj.data = nullptr;
}


template<class T>
inline size_t s_list<T>::size() const
{
	size_t index{ 0 };
	node<T>* temp{ first };
	while (temp) {
		index++;
		temp = temp->next;
	}
	return index + 1;
}

template<class T>
inline s_list<T>::~s_list()
{
	delete first;
	delete last;
}
#endif


main


#include <iostream>
#include <ctime>

#include "s_list.h"
using namespace std;


int main() {
	srand(time(0));

	s_list<int> first;
	int size = rand() % 20;
	for (int i = 0; i < size; i++)
		first.add_to_head(rand() % 100);
	first.show();

	//first.delete_from_head();
	//first.delete_from_tail();
	//first.show();

	//s_list<int> second;
	//size = rand() % 20;
	//for (int i = 0; i < size; i++)
	//	second.add_to_head(rand() % 10);
	//second.show();

	//second.add_to_tail(rand() % 10);
	//second.show();

	//s_list<int> third(second);
	//third.show();

	//s_list<int> fourth;
	//fourth = first;
	//fourth.show();

	first.sort();
	first.show();

	//first.reverse();
	//first.show();

	//size = fourth.size();
	//for (int i = 0; i < size; i++) {
	//	int value = fourth[i];
	//	//cout << value << " ";
	//}
	//cout << endl;

	//first.delete_at(3);
	//first.show();

	//first.insert_at(4, 4);
	//first.show();

	//first.delete_all();
	//first.show();

	//first.splice(third);
	//first.show();
	//first.splice(fourth);
	//first.show();

	//size_t result = first.find(10);
	//if (result != 0)
	//	cout << "The number ten is in position: " << result << endl;
	//else
	//	cout << "Numbers ten not found" << endl;

	//first.find_and_replace(10, 1000);

	//for (auto it = first.begin(); it != first.end(); ++it)
	//	cout << *it << " ";

	return 0;
}
