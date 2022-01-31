#include <iostream>
#include "cmatrix.h"

cmatrix::cmatrix()
{
	size = MAX_SIZE;

	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = 0; j < size; j++)
			m[i][j] = cnum();
}

cmatrix::cmatrix(const unsigned int usr_size)
{
	size = usr_size;

	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = 0; j < size; j++)
			m[i][j] = cnum();
}

cmatrix::cmatrix(cnum pp, const unsigned int usr_size)
{
	size = usr_size;

	if (!pp.getx() && !pp.gety())
	{
		for (unsigned int i = 0; i < size; i++)
			for (unsigned int j = 0; j < size; j++)
			{
				m[i][j] = cnum((double)(rand() % 4), 0/*(double)(rand() % 4)*/);
			}
	}
	else
	{
		for (unsigned int i = 0; i < size; i++)
			for (unsigned int j = 0; j < size; j++)
			{
				m[i][j] = pp;
			}
	}
}

void cmatrix::print(void)
{
	for (unsigned int i = 0; i  < size; i++)
	{
		for (unsigned int j = 0; j < size; j++)
		{
			m[i][j].print(' ');
		}

		std::cout << std::endl;
	}
}

const unsigned int cmatrix::getdim(void)
{
	return size;
}

const unsigned int cmatrix::getsize(void)
{
	return size * size;
}

cnum cmatrix::getmember(unsigned int i, unsigned int j)
{
	return m[i][j];
}

void cmatrix::setmember(unsigned int i, unsigned int j, const cnum member)
{
	m[i][j] = member;
}

void cmatrix::sum(cmatrix a, cmatrix b)
{
	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = 0; j < size; j++)
			m[i][j] = a.getmember(i, j) + b.getmember(i, j);
}

void cmatrix::prod(cmatrix a, cmatrix b)
{
	for (unsigned int i = 0; i < size; i++)
		for (unsigned int j = 0; j < size; j++)
		{
			cnum sum = cnum();

			for (unsigned int k = 0; k < size; k++)
				sum = sum + a.getmember(k, j) + b.getmember(i, k);

			m[i][j] = sum;
		}
}