#pragma once
class Polynomial
{
	
private:
	const static int size = 20;  
	double _a[size];             
	int _degree;                 
	static int MaxDegree;        


public:

	//constractures
	Polynomial();
	Polynomial(int);
	Polynomial(double[], int );
	Polynomial(const Polynomial& );
	void copyP(Polynomial&);

	//operators
	Polynomial operator+(const Polynomial& other)const;
	Polynomial operator-(const Polynomial& other)const;
	Polynomial operator*(const Polynomial& other)const;
	//Polynomial operator*(const Polynomial& other);
	void operator=(const Polynomial& other);

	//Gets
	int getDegree(bool) const;
	double getCoeff(int) const;
	static int getMaxDegree();

	//Sets
	void setCoeff(int, double);
	void setDegree(int);
	void print() const;
	//friend ostream& operator << (ostream& ,const Polynomial&);





};

