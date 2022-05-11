#pragma once
class Punkt
{
public:
	Punkt();
	Punkt(double, double);

	void set(const double, const double);

	double getX() const;
	double getY() const;

	bool operator== (const Punkt&) const;
	bool operator!= (const Punkt&) const;

	Punkt operator+ (const Punkt&) const;
	Punkt& operator* (const double);
	Punkt operator- () const;

private:
	double x, y;
};

