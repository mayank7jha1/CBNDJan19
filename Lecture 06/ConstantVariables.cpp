#include<iostream>
using namespace std;

//Is there a way to change a value of a constant variable in a scope?

#define PI 3.14 //Macros : This is not a statement

const int x = 90;


int main() {

	// x += 1;//Not Allowed;

	const int x = 40;
	cout << x << endl;//Allowed and value is 40;


	if (x < 100) {
		const int x = 190;//Allowed;
		cout << x << endl;//Value of x is 90.
	}


	cout << PI << endl;//It is going to replace PI with 3.14 as value.

}