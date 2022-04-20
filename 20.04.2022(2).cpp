#include "my_string.h"


my_string::my_string()
{
	this->str = nullptr;
}

my_string::my_string(const char* str)
{
	size_t size = strlen(str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, str);
}

my_string::my_string(const my_string& obj)
{
	size_t size = strlen(obj.str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, obj.str);
}

my_string::my_string(my_string&& obj)
{
	this->str = obj.str;
	obj.str = nullptr;
}

my_string::~my_string()
{
	if (this->str)
		delete[] this->str;
}

size_t my_string::find(const char* str, size_t pos) const
{
	if(this->str){
	const char* ptr = strstr(this->str, str + pos);
		if (ptr)
			return ptr - str;
	}
	return npos;
}

void my_string::clear()
{
	size_t size = strlen(this->str);
	delete[] this->str;
}

void my_string::replace(size_t pos, size_t len, const char* str)
{
	if (this->str)
		if (len == npos)
			strcpy_s(this->str, strlen(this->str) + 1, str + pos);
		else
			strncpy_s(this->str, strlen(this->str) + 1, str + pos, len);
}

void my_string::push_back(char ch)
{
	size_t size = strlen(this->str);
	this->str[size + 2] = '\0';
}

void my_string::pop_back()
{
	size_t size = strlen(this->str);
	this->str[size - 2] = '\0';
}

void my_string::append(const char* str)
{
	size_t size = strlen(this->str);
	strcpy(this->str) = '\0';
}

void my_string::insert(size_t pos, const char* str)
{
	if (this->str)
		if (len == npos)
			strcpy_s(this->str, strlen(this->str) + 1, str + pos);
		else
			strncpy_s(this->str, strlen(this->str) + 1, str + pos, len);
}

void my_string::erase()
{
	size_t size = strlen(this->str);
	this->str[size] = '\0';
}
