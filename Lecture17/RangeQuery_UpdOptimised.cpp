#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int difference[n + 1] {};

	int q;
	cin >> q;


	//Computations : 2*q + n == ~ (q+n)
	while (q > 0) {

		int l, r, d;
		cin >> l >> r >> d;

		/*
			for (int i = l; i <= r; i++) {
				a[i] += d;
			}
		*/

		//Resolving the range :
		difference[l] += d;
		difference[r + 1] -= d;


		q--;
	}

	//Take Prefix sum of difference array :
	for (int i = 1; i < n + 1; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}

	//Add the difference array to your original array.

	for (int i = 0; i < n; i++) {
		a[i] += difference[i];
	}

	//Print the new array now :
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;



}