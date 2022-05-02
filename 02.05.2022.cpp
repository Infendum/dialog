date.cpp

#include "Date.h"
#include <iostream>
#include <ctime>

bool Date::operator<(const Date& obj)
{
    return this->second < obj.second;
}

bool Date::operator>(const Date& obj)
{
    return this->second > obj.second;
}

bool Date::operator==(const Date& obj)
{
    return this->second == obj.second;
}

bool Date::operator!=(const Date& obj)
{
    return this->second != obj.second;
}

Date::Date()
{
    long long second = 0;
}

Date::Date(int day, int month, int year)
{
    int day1 = day;
    int month1 = month;
    int year1 = year;
    this->second = day1 * 86400 + month * 2678400 + year * 31557600;
}


int Date::get() const
{
    int day1;
    int month1;
    int year1;
    std::cin >> day1;
    if (day1 < 32) {
        return day1;
    }
    else {
        return false;
    }
    std::cin >> month1;
    if (month1 < 13) {
        return month1;
    }
    else {
        return false;
    }
    std::cin >> year1;
    if (year1 < 2023) {
        return year1;
    }
    else {
        return false;
    }
    return 0;
}



void Date::show()
{
    std::cout << this->second;
}

void Date::systemtime()
{
    time_t seconds = time(NULL);
    tm* timeInfo = localtime(&seconds);
    seconds = timeInfo->tm_wday * day + timeInfo->tm_mon * month + timeInfo->tm_year * year;
}


date.h


#pragma once

class Date
{
public:
	bool operator<(const Date& obj);
	bool operator>(const Date& obj);
	bool operator==(const Date& obj);
	bool operator!=(const Date& obj);
	Date();
	Date(int day, int month, int year);
	int get() const;
	void show();
	void systemtime();
private:
	long long second;
	int day;
	int month;
	int year;
};

main

#include "Date.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	Date cur(4, 5, 2017);
	Date bh(1, 2, 1999);

	/*std::cout << "С вашего дня рождения прошло " << (cur - bh) << " дней\n";

	cur = cur + 5;
	cur += 5;*/

	cur.show();	// 14.05.2017

	std::cin.get(); std::cin.get();
}
