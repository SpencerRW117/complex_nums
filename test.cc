#include "imaginary.h"
#include <iostream>

using namespace std;

int main(){

	cout << boolalpha; //Print "true" instead of "1" when outputting bools
	Imaginary i,j; //These three lines are test code, delete them later
	cin >> i >> j; //Read two Imaginaries in - won't work till cstors done
	cout << i+j << endl; //Output the sum of them
	cout << i-j << endl; //Output the diff of them
	cout << i*2 << endl; //Output the scalar multiple of them
	cout << i*i << endl; //Output the exponential of them
	cout << i*j << endl; //Output the complex product of them
	cout << boolalpha << (i == j) << endl;
	Complex num;
	Complex num2;
	cin >> num;
	cin >> num2;
	cout << num << endl;
	cout << num + num2 << endl; //add complex works
	cout << num - num2 << endl; //sub complex works
	cout << num * num2 << endl; //mult complex works
	cout << boolalpha << (num == num2) << endl;
	cout << (num ^ 3) << endl;

}