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
		int result;
		this->numerator = this->numerator * obj.denominator;
		obj.numerator == this->denominator * obj.numerator;
		denominator = this->denominator * obj.denominator;
		obj.denominator == this->denominator * obj.denominator;
		return fraction(this->numerator + obj.numerator, denominator);
	}
	return fraction();
}

fraction fraction::operator-(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator - obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int result;
		this->numerator = this->numerator * obj.denominator;
		obj.numerator == this->denominator * obj.numerator;
		denominator = this->denominator * obj.denominator;
		obj.denominator == this->denominator * obj.denominator;
		return fraction(this->numerator - obj.numerator, denominator);
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
	int slozh;
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
