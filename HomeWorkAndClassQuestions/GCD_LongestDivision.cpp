#include<iostream>
using namespace std;


int main() {

	int a, b;
	cin >> a >> b;

	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	while (a != 0) {
		int r = (b % a);
		b = a;
		a = r;
	}

	cout << b << endl;
}