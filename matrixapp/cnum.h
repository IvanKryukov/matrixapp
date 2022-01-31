#pragma once
class cnum
{
	double x;
	double y;

public:
	cnum() : x(0), y(0) {};
	cnum(double usrx, double usry) : x(usrx), y(usry) {};

	void print(const char next_str);

	const double getx(void);
	const double gety(void);

	void setx(const double usrx);
	void sety(const double usry);
	void  set(const double usrx, const double usry);
	cnum conj(void);

	cnum operator +(const cnum& a)
	{
		cnum c = cnum(a.x + x, a.y + y);
		return c;
	}

	cnum operator -(const cnum& a)
	{
		cnum c = cnum(x - a.x, y - a.y);
		return c;
	}

	cnum operator *(const cnum& a)
	{
		cnum c = cnum(x * a.x - y * a.y, y * a.x + x * a.y);
		return c;
	}
};

