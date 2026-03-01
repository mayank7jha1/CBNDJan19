#include<iostream>
using namespace std;


int sum(int *b, int n) {

	cout << b << endl;
	cout << *(b + 0) << endl;

}

int sum2(int b[], int n) {

	cout << b << endl;
	cout << b[0] << endl;

	// *(b+2) = *(a+2) = 90
	b[2] = 90;

}

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << a << endl;

	//In c++ array are always passed by address/reference inside a function.

	cout << sum2(a, n) << endl;

	cout << a[2] << endl;

}