#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//This below puts the largest element at the end.
	for (int i = 0; i < (n - 1); i++) {

		if (a[i] > a[i + 1]) {
			// Swap them
			int temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}

