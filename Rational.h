#pragma once
#include "Polynomial.h"
class Rational
{
private:
	Polynomial _p1;
	Polynomial _p2;

public:
	//constructers & discructers
	Rational();
	Rational(Polynomial, Polynomial);

	Polynomial getNom();
	Polynomial getDenom();

	void print();

};

