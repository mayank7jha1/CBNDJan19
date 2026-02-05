#include<iostream>
using namespace std;

//Is there a way to change a value of a constant variable in a scope?
const int x = 90;
// #define x 100


int main() {

	// x += 10;//Not Allowed.
	cout << x << endl;
	if (x < 200) {
		int x = 900;//This is not allowed.
		cout << x << endl;
	}


}