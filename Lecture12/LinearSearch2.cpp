#include<iostream>
using namespace std;

/*
	Given an array you need to check a element is present in the array or not?

*/


int main() {

	int n;
	cin >> n;

	int a[n];//Preassuming valid input is there.

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	int i;

	for (i = 0; i < n; i++) {

		//Current box is a[i] :
		if (a[i] == target) {
			break;
		}

		//cout << "No" << endl;//Why this is wrong?
	}

	if (i == n) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}





}