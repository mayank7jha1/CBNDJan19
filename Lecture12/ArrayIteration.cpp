#include<iostream>
using namespace std;

/*

	Take input of an array and print the sum and the array itself.

*/


int main() {

	int n;
	cin >> n;

	// const int m = 100;
	// int a[m];


	// int b[100];

	// if (n >= 0) {
	// 	int a[n] {0};
	// }

	int a[n];// User can give n as a negative value. User can also give n as 0.

	/*
			i++ : i+=1 and i=i+1
			i-- : i-=1 and i=i-1

	*/

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	int i = 0;//Is this Allowed.

	for (i = 0; i < n; i++) {
		sum += a[i];
	}

	//i<n this condition will only fail when i=n and n=5 and i bhi 5 hoga.

	// cout << i << endl; i will be 5.

	cout << sum << endl;


}