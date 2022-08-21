#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational() {
	_p1.setCoeff(0, 0);
	_p2.setCoeff(0, 1);
}

Rational::Rational(Polynomial p1, Polynomial p2) {
	_p1 = p1;
	_p2 = p2;
}

Polynomial Rational:: getNom() {
	return this->_p1;
}


Polynomial Rational::getDenom() {
	return this->_p2;
}

void Rational::print() {
	_p1.print();
	cout << " ----------------------------" << endl;
	_p2.print();
}