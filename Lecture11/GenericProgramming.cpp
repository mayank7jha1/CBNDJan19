#include<iostream>
using namespace std;

/*
	Generic Programming :
	1. Function Overloading
	2. Default Arguments
	3. Templates.

	Overloading : Duddal Sahab : Ek hi cheez alag alg situation me
	alag alag kaam kar rahi hain.

	Operators
	Functions
	Objects

	Function Overloading :
	1. Either the number of arguments are different.
	2. Type of the above arguments are different.
	3. Return Type is different (This is not true.)

*/

int sum(int x, int y) {
	return x + y;
}

int sum(int x, int y, int z) {
	return x + y + z;
}

//Not Allowedm as part of function overloading
// double sum(int x, int y, int z) {
// 	return x + y + z;
// }

int sum(int x, int y, int z, int m) {
	return x + y + z + m;
}

double sum(int x, double y, int z) {
	return x + y + z;
}

double sum(double x, double y) {
	cout << "Hello Checking";
	return x + y;
}



int main() {
	cout << endl << sum(19.76, 89.54);
}