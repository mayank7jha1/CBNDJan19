#include<iostream>
using namespace std;


/*
	Computation : n*q;


*/

int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> x >> y;

		//Current Query Task : Sum of array from x index till y index.
		int sum = 0;
		for (int j = x; j <= y; j++) {
			sum += a[j];
		}

		cout << sum << endl;
	}


}