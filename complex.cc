#include <iostream>
#include "complex.h"
#include <cmath>
using namespace std;

//Class definition file for Complex

//YOU: Fill in all of these functions
//There are stubs (fake functions) in there now so that it will compile
//The stubs should be removed and replaced with your own code.

Complex::Complex() { //default cstor
	real = 0;
	imagine = Imaginary();
}

Complex::Complex(int new_real, Imaginary new_imagine) {
	real = new_real;
	imagine = new_imagine;
}

Complex Complex::operator+(const Complex &rhs) {
	return Complex(real + rhs.real, imagine + rhs.imagine);
}

Complex Complex::operator-(const Complex &rhs) {
	return Complex(real - rhs.real, imagine - rhs.imagine);
}

Complex Complex::operator*(const Complex &rhs) {
	int tempreal = (real * rhs.real) + (imagine * rhs.imagine);
	Imaginary tempimagine = (rhs.imagine * real) + (imagine * rhs.real);
	return Complex(tempreal, tempimagine);
}
int Complex::getreal(){
	return real;
}
int Complex::getimagine(){
	return imagine.get_coeff();
}

bool Complex::operator==(const Complex &rhs) {
	if(real == rhs.real && imagine == rhs.imagine){
		return true;
	}
	else return false;
}

Complex Complex::operator^(const int &exponent) {
	Complex base = Complex(real, imagine);
	Complex temp = Complex(real, imagine);
	if(exponent == 0){
		return Complex(1, 0);
	}	
	else{
		for(int i = 1; i < exponent; i++){
			temp = temp * base;
		}
		return temp;
	}
}

//This function should output 3+5i for Complex(3,5), etc.
ostream& operator<<(ostream &lhs,const Complex& rhs) {
	//Output a Complex here
	lhs << rhs.real << rhs.imagine;
	return lhs;
}

//This function should read in two ints, and construct a 
// new Complex with those two ints
istream& operator>>(istream &lhs,Complex& rhs) {
	//Read in a Complex here
	int i;
	Imaginary j;
	lhs >> i >> j;
	rhs.real = i;
	rhs.imagine = j;
	return lhs;
}

