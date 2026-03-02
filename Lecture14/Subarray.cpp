#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int sp = 0; sp < n; sp++) {

		//For My current Sp there can be multiple end points.
		for (int ep = sp; ep < n; ep++) {

			//My Current Subarray is [sp,ep].
			//How to print the array from sp index till ep index.
			//Printing
			for (int i = sp; i <= ep; i++) {
				cout << a[i] << " ";
			}

			cout << endl;
		}
		cout << endl;
	}

}