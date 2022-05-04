main



#include <iostream>
#include "book.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	/*book second("Адитья Бхаргава", "Grokking Algorithms: An illustrated guide for programmers and other curious people", "Питер", 2017, 370);*/
	/*book first = second;*/
	const int size = 3;
	book mas[size];
	mas[0].init("Адитья Бхаргава", "Grokking Algorithms: An illustrated guide for programmers and other curious people", "Питер", 2017, 370);
	mas[1].init("Игорь Савчук", "Отъявленный программист: Лайфхакинг из первых рук", "Питер", 2015, 272);
	mas[2].init("Бен Клеменс", "21st Century C", "ДМК Пресс", 2015, 376);

	std::cout << "Список книг Бен'a:\n";
	for (int i = 0; i < size; i++) {
		mas[i].show_by_author("Бен");
	}

	std::cout << "Список книг издательства Питер:\n";
	for (int i = 0; i < size; i++) {
		mas[i].show_by_publishing_house("Питер");
	}

	std::cout << "Список книг после 2000:\n";
	for (int i = 0; i < size; i++) {
		mas[i].show_by_year(2000);
	}

	return 0;
}

book.cpp

#include "book.h"


book::book() : author(nullptr), name(nullptr)
{
	/*author = nullptr;*/
	name = nullptr;
	publishing_house = nullptr;
	year = 0;
	number_pages = 0;
}

book::~book()
{
	if (author)
		delete[] author;
	if (name)
		delete[] name;
	if (publishing_house)
		delete[] publishing_house;
}

book::book(const book& tmp)
{
	size_t size = strlen(tmp.author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, tmp.author);

	size = strlen(tmp.name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, tmp.name);

	size = strlen(tmp.publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, tmp.publishing_house);


	this->year = tmp.year;
	this->number_pages = tmp.number_pages;
}

book::book(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);

	size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);

	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);


	this->year = year;
	this->number_pages = number_pages;
}

book::book(unsigned short number_pages) : book()
{
	this->number_pages = number_pages;
}

void book::init(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);

	size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);

	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);


	this->year = year;
	this->number_pages = number_pages;
}

void book::show() const
{
	std::cout << "author" << author << std::endl;
	std::cout << "name" << name << std::endl;
	std::cout << "publishing_house" << publishing_house << std::endl;
}

void book::show_by_author(const char* author)
{
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);
	this->show_by_author = mas[2].init;
	std::cout << show_by_author << std::endl;
}

void book::show_by_publishing_house(const char* publishing_house)
{
	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);
	this->show_by_publishing = mas[2].init;
}

void book::set_author(const char* author)
{
	if (this->author)
		delete[] this->author;
	size_t size = strlen(author);
	this->author = new char[size + 1];
	strcpy_s(this->author, size + 1, author);
}

void book::set_name(const char* name)
{
	if (this->name)
		delete[] this->name;
	size_t size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name, size + 1, name);
}

void book::set_publishing_house(const char* publishing_house)
{
	if (this->publishing_house)
		delete[] this->publishing_house;
	size_t size = strlen(publishing_house);
	this->publishing_house = new char[size + 1];
	strcpy_s(this->publishing_house, size + 1, publishing_house);
}

void book::set_year(unsigned short year)
{
	if (year)
		delete[] year;
	year = year;
}

const char* book::get_author() const
{
	return this->author;
}

book.h

#pragma once
#include<string.h>
class book
{
	char* author;
	char* name;
	char* publishing_house;
	unsigned short year;
	unsigned short number_pages;
public:
	book();
	~book();
	book(const book& tmp);
	book(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages);
	explicit book(unsigned short number_pages);
	void init(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages);
	void show() const;
	void show_by_author(const char* author);
	void show_by_publishing_house(const char* publishing_house);
	void show_by_year(unsigned short year);
	void set_author(const char* author);
	void set_name(const char* name);
	void set_publishing_house(const char* publishing_house);
	void set_year(unsigned short year);
	void set_number_pages(unsigned short number_pages);
	const char* get_author()const;
	const char* get_name()const;
	const char* get_publishing_house()const;
	unsigned short get_year()const;
	unsigned short get_number_pages()const;
};
