#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "imaginary.h"
#include "complex.h"
//YOU: include the header file for complex numbers

using namespace std;
void die(){
	cout << -1 << endl;
	exit(EXIT_SUCCESS);
}
int main() {

	while (true) {
		//YOU: Read in a complex number
		Complex num1, num2;
		int exp = 0;
		string oper = "";
		cin >> num1;
		if(!cin) die();
		//YOU: If it is 0 0, then break or exit
		if(num1.getreal() == 0 && num1.getimagine() == 0) {
			exit(EXIT_SUCCESS);
		}	
		//YOU: Read in an operator (+,-,*,==,or ^)
		cin >> oper;
		

		//YOU: Read in the second operand (another complex or an int)
		//YOU: Output the result
		if(oper == "^"){
			cin >> exp;
			cout << (num1 ^ exp) << endl;
		}
		else if(oper == "+"){
			cin >> num2;
			if(!cin) die();
			if(num2.getreal() == 0 && num2.getimagine() == 0) {
				die();
			}	
			Complex temp = (num1 + num2);
			cout << temp << endl;
		}
		else if(oper == "-"){
			cin >> num2;
			cout << num1 - num2 << endl;
		}
		else if(oper == "*"){
			cin >> num2;
			cout << num1 * num2 << endl;
		}
		else if(oper == "=="){
			cin >> num2;
			cout << boolalpha << (num1 == num2) << endl;
		}
		else{
			cout << -1 << endl;
			exit(EXIT_SUCCESS);
		}
		
	}
}
