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
