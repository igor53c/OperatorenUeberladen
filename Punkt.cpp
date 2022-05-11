#include "Punkt.h"

Punkt::Punkt()
{
	x = y = 0.0;
}

Punkt::Punkt(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Punkt::set(const double x, const double y)
{
	this->x = x;
	this->y = y;
}

double Punkt::getX() const
{
	return x;
}

double Punkt::getY() const
{
	return y;
}

Punkt Punkt::operator+(const Punkt& that) const
{
	return { this->getX() + that.getX(), this->getY() + that.getY() };
}

Punkt& Punkt::operator*(const double faktor)
{
	this->x *= faktor;
	this->y *= faktor;

	return *this;
}

Punkt Punkt::operator-() const
{
	return {-this->x, -this->y};
}

bool Punkt::operator==(const Punkt& that) const
{
	return this->getX() == that.getX() && this->getY() == that.getY();
}

bool Punkt::operator!=(const Punkt& that) const
{
	// return this->getX() != that.getX() || this->getY() != that.getY();

	return !(*this == that);
}
