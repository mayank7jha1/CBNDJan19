#include<iostream>
using namespace std;

void check(int &x) {
	x = 20;//This x is another name of a variable of main.
	cout << x << endl;
}


int main() {

	int a{10};

	cout << a << endl;
	check(a);

	cout << a << endl;
	// cout << x << endl;Error.

}