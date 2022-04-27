myarray.cpp

#include "MyArray.h"

ostream& operator<<(ostream& os, const MyArray obj)
{
	for (auto i = 0; i < obj.size; i++) {
		os << obj.masiv[i] << " ";
	}
    return os;
}

MyArray::MyArray(const size_t size)
{
	this->size = size;
	this->masiv = new int[this->size];
}

MyArray::MyArray(const MyArray& obj)
{

	this->masiv = new int[obj.size];
	for (auto i = 0; i < obj.size; i++) {
		this->masiv[i] = obj.masiv[i];
	}
}

MyArray::MyArray(MyArray&& obj)
{
	this->size = obj.size;
	this->masiv = obj.masiv;
	obj.masiv = nullptr;

}

MyArray MyArray::operator=(const MyArray& obj)
{
	this->size = obj.size;
	if (this->masiv) {
		delete[] this->masiv;
	}
	this->masiv = new int[obj.size];
	for (auto i = 0; i < obj.size; i++) {
		this->masiv[i] = obj.masiv[i];
	}
	return *this;
}

MyArray MyArray::operator=(MyArray&& obj)
{
	this->size = obj.size;
	if (this->masiv) {
			delete[] this->masiv;
	}
	this->masiv = obj.masiv;
	obj.masiv = nullptr;
	return *this;
}

void MyArray::begin()
{
	int indx = 0;
	this->index = indx;
}

bool MyArray::end() const
{
	if (this->index < this->size) {
		return true;
	}
	else {
		return false;
	}
}

void MyArray::next()
{
	this->index++;
}

int MyArray::get() const
{

	return 0;
}

void MyArray::resize(const size_t new_size)
{
	int mass;
	mass = this->size + new_size;
}

void MyArray::sort()
{
}

size_t MyArray::lenght() const
{
	return size;
}



myarray.h

#pragma once
#include <iostream>
using namespace std;
class MyArray
{
public:
	MyArray();
	explicit MyArray(const size_t size);
	MyArray(const MyArray& obj);
	MyArray(MyArray&& obj);
	MyArray operator=(const MyArray& obj);
	MyArray operator=(MyArray&& obj);
	MyArray operator+ (const MyArray& obj) const;
	void begin();
	bool end() const;
	void next();
	int	get() const;
	void set(const int data, const size_t pos = 0);
	void resize(const size_t new_size);
	void revers();
	void sort();
	size_t lenght() const;
	friend ostream& operator<< (ostream& os, const MyArray obj);
	~MyArray();
private:
	size_t size;
	int* masiv;
	size_t index;
};


main

#include "MyArray.h"
#include <iostream>

int main()
{
	const auto SIZE = 10;

	MyArray first(SIZE), second(SIZE), third;

	for (auto i = 0; i < SIZE; i++)
	{
		first.set(i, i);
		second.set(SIZE - i, i);
	}

	for (first.begin(); first.end(); first.next())
		std::cout << first.get() << ", ";
	std::cout << std::endl;

	std::cout << first << std::endl << second << std::endl << std::endl;

	third = first = second;
	std::cout << first << std::endl << second << std::endl << third << std::endl << std::endl;

	third = first + second;
	std::cout << first << std::endl << second << std::endl << third << std::endl << std::endl;

	third.resize(30);
	std::cout << third << std::endl;

	third.resize(20);
	std::cout << third << std::endl;

	third.revers();
	std::cout << third << std::endl;

	third.sort();
	std::cout << third << std::endl;

	return 0;
}
