my_string.cpp


#include "my_string.h"


my_string::my_string()
{
	this->str = nullptr;
	this->obj = nullptr;
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

size_t my_string::find(const my_string& obj, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str, obj.str + pos);
		if (ptr)
			return ptr - obj.str;
	}
	return npos;
}

void my_string::clear()
{
	if (this->str)
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

void my_string::replace(size_t pos, size_t len, const my_string& obj)
{
	if (this->str)
		if (len == npos)
			strcpy_s(this->str, strlen(this->str) + 1, obj.str + pos);
		else
			strncpy_s(this->str, strlen(this->str) + 1, obj.str + pos, len);
}

void my_string::swap(my_string&& obj)
{
	char* str1 = nullptr;
	strcpy_s(str1, strlen(this->str) + 1, str);
	strcpy_s(this->str, strlen(this->str) + 1, str);
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
	strcpy_s(this->str[size + 2] = '\0', strlen(this->str) + 1, str);
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
	
	this->str[0];
}



my_string.h



#pragma once
#include <string.h>
class my_string
{
private:
    char* str; /* Указатель для хранения массива символов в стиле С. */
public:
    /* Предустановленное значение. Означает «до конца строки». */
    static const size_t npos = -1;
    //static const size_t npos = UINTMAX_MAX;

    /* Набор конструкторов класса. */
    my_string();
    my_string(const char* str);
    my_string(const my_string& obj); // Копирования
    my_string(my_string&& obj);      // Переноса

    /* Деструктор */
    ~my_string();

    /* Возвращает длинну строки. */
    inline size_t length() const;

    /* Возвращает символ из соответствующей позиции. */
    const char at(size_t pos) const;

    /* Добавляет символ в конец строки. */
    void push_back(char ch);

    /* Удаляет последний символ из строки. */
    void pop_back();

    /* Добавить строку в конец текущей строки. */
    void append(const char* str);
    void append(const my_string& obj);

    /* Вставляет строку непосредственно перед символом, обозначенным pos. */
    void insert(size_t pos, const char* str);
    void insert(size_t pos, const my_string& obj);

    /* Очищает строку. */
    void erase();

    /* Заменяет часть строки, которая начинается с символа pos и заменяет len символов,
       новым содержимым. При значении len = npos копируются все символы до конца строки. */
    void replace(size_t pos, size_t len, const char* str);
    void replace(size_t pos, size_t len, const my_string& obj);

    /* Обменивает содержание двух строк. */
    void swap(my_string&& obj);

    /* Копирует строку. */
    void copy(const char* str);
    void copy(const my_string& obj);

    /* Ищет в строке первое вхождение подстроки, указанной ее аргументами.
       Когда задано значение pos, поиск начинается с указанной позиции.
       Положение первого символа найденной последовательности.
       Если совпадений не найдено, функция возвращает my_string::npos.  */
    size_t find(const char* str, size_t pos = 0) const;
    size_t find(const my_string& obj, size_t pos = 0) const;

    /* Сравнивает две строки. */
    int compare(const char* str) const;
    int compare(const my_string& obj) const;

    /* Возвращает строку как массив символов в стиле С. */
    const char* c_str() const;

    /* Очищает строку. */
    void clear();
};


main



#include "my_string.h"
#include <iostream>


my_string f(my_string str) {
    return str;
}




int main()
{
    my_string str = "test";
    /*my_string str2 = str;*/
    f(str);
   
    

    return 0;
}
