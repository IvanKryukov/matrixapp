#pragma once
#include "cnum.h"

#define MAX_SIZE (16U)

class cmatrix
{
	unsigned int size;
	cnum m[MAX_SIZE][MAX_SIZE];

public:
	cmatrix();
	cmatrix(const unsigned int usr_size);
	cmatrix(cnum pp, const unsigned int usr_size);

	void print(void);
	const unsigned int getdim(void);
	const unsigned int getsize(void);
	cnum getmember(unsigned int i, unsigned int j);
	void setmember(unsigned int i, unsigned int j, const cnum member);

	void sum(cmatrix a, cmatrix b);
	void prod(cmatrix a, cmatrix b);

};

