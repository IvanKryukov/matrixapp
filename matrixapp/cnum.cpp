#include <iostream>
#include <iomanip>
#include "cnum.h"

#define PRINT_BORDER

using namespace std;

void cnum::print(const char next_str)
{
#if (defined PRINT_BORDER)
	cout << fixed << setw(5) << setprecision(0) << "(" << x << ":" << y << ")";
#else
	cout << fixed << setw(5) << setprecision(1) << x << ":" << y;
#endif
	
	if (NULL != next_str)
		cout << next_str;
}

const double cnum::getx(void)
{
	return x;
}

const double cnum::gety(void)
{
	return y;
}

void cnum::setx(const double usrx)
{
	x = usrx;
}

void cnum::sety(const double usry)
{
	y = usry;
}

void cnum::set(const double usrx, const double usry)
{
	x = usrx;
	y = usry;
}


cnum cnum::conj(void)
{
	return cnum(x, -y);
}