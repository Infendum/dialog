#include "fraction.h"

fraction::fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}

fraction::fraction(const unsigned int num, const unsigned int den)
{
	first
}

fraction fraction::operator+(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return(this->numerator + obj.numerator);
	}
	else if (this->denominator != obj.denominator) {
		
	}
	return fraction();
}

fraction fraction::operator-(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return(this->numerator - obj.numerator);
	}
	return fraction();
}

fraction fraction::operator*(const fraction& obj)
{
	return fraction(this->numerator * obj.numerator, this->denominator * obj.denominator);
}

fraction fraction::operator/(const fraction& obj)
{
	return fraction(this->numerator * obj.denominator, this->denominator * obj.numerator);
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
