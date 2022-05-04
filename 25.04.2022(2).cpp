fraction.cpp



#include "fraction.h"

fraction::fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}

fraction::fraction(const unsigned int num, const unsigned int den)
{
	this->numerator = num;
	this->denominator = den;
}

fraction fraction::operator+(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator + obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int numerator1 = obj.numerator;
		int denomirator1 = obj.denominator;
		this->numerator = this->numerator * denomirator1;
		numerator1 = this->denominator * numerator1;
		denominator = this->denominator * denomirator1;
		denomirator1 == this->denominator * denomirator1;
		return fraction(this->numerator + numerator1, denominator);
	}
	return fraction();
}

fraction fraction::operator-(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator - obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int numerator1 = obj.numerator;
		int denomirator1 = obj.denominator;
		this->numerator = this->numerator * denomirator1;
		numerator1 = this->denominator * numerator1;
		denominator = this->denominator * denomirator1;
		denomirator1 == this->denominator * denomirator1;
		return fraction(this->numerator - numerator1, denominator);
	}
}

fraction fraction::operator*(const fraction& obj)
{
	return fraction(this->numerator * obj.numerator, this->denominator * obj.denominator);
}

fraction fraction::operator/(const fraction& obj)
{
	return fraction(this->numerator * obj.denominator, this->denominator * obj.numerator);
}

fraction fraction::operator+(const int& value)
{
	fraction obj(value, 1)
		int numerator1 = obj.numerator;
	int denomirator1 = obj.denominator;
	value = 1;
	int den = 1;
	this->numerator = this->numerator * den;
	value = this->denominator * value;
	denominator = this->denominator * den;
	den == this->denominator * den;
	return fraction(this->numerator + value, denominator);

	return fraction();
	return fraction();
}

fraction fraction::operator-(const int& value)
{
	fraction obj(value, 1)
		int numerator1 = obj.numerator;
	int denomirator1 = obj.denominator;
	value = 1;
	int den = 1;
	this->numerator = this->numerator * den;
	value = this->denominator * value;
	denominator = this->denominator * den;
	den == this->denominator * den;
	return fraction(this->numerator - value, denominator);

	return fraction();
	return fraction();
}

fraction::operator float()
{
	if (this->numerator == 0 && this->denominator == 0)
		return 0;
	if (this->denominator == 0) {
		std::cout << "error" << std::endl;
		return FLT_MAX;
	}
	return (float)numerator / (float)denominator;
}

void fraction::show()
{
	std::cout << this->numerator;
	std::cout << "/";
	std::cout << this->denominator << std::endl;
}






fraction.h




#pragma once
#include <iostream>
class fraction
{
	private:
	unsigned int numerator;
	unsigned int denominator;
public:
	fraction();
	fraction(const unsigned int num, const unsigned int den);
	fraction operator+(const fraction& obj);
	fraction operator-(const fraction& obj);
	fraction operator*(const fraction& obj);
	fraction operator/(const fraction& obj);
	fraction operator+(const int& value);
	fraction operator-(const int& value);
	operator float();
	void show();
};






main





#include <iostream>
#include "fraction.h"

int main()
{
	fraction first(3, 5), second(1, 2), third;

	third = first + second;
	third.show();
	std::cout << third << std::endl << std::endl;

	third = first - second;
	third.show();
	std::cout << third << std::endl << std::endl;

	third = first * second;
	third.show();
	std::cout << third << std::endl << std::endl;

	third = first / second;
	third.show();
	std::cout << third << std::endl << std::endl;
	return 0;
}
