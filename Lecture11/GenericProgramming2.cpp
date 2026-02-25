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

int sum(int a, int b, int c = 0, int d = 0, int e = 0) {
	return a + b + c + d + e;
}


//Templates:
template < typename T1, typename T2>
T2 sum2(T1 &a, T1 &b, T2 c = 0, T1 d = 0, T2 e = 0) {
	return a + b + c + d + e;
}


int main() {
	int x = 10;
	cout << sum2<int, double>(x, x);
}