#include<iostream>
using namespace std;


/*
	Given an array you need to update a value in array and reverse the array.

*/


int main() {

	int n;
	cin >> n;

	int a[n];//Preassuming valid input is there.

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	//Approach 1 : Just Printing the reverse array. You have not made any changes in the original array. i.e Original array remains the same.

	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;


	//Approach 2 :


	int b[n];
	int j = n - 1;//Start from the last index.

	for (int i = 0; i < n; i++) {

		// a[i] = b[j];//Why is this wrong for reversing?
		b[i] = a[j];//You want to assign a values in reverse in b.

		// update the j value:
		j--;
	}

	//For Each Loop : For every element of b that is going to be represented as x print the values as x.
	for (int x : b) {
		cout << x << " ";
	}

	/*

		int b[n];
		int j = n - 1;

		for (int i = 0; i < n and j >= 0; i++) {
			b[i] = a[j];
			j--;
		}
	*/
	/*
		int b[n];
		for (int i = 0, j = n - 1; i < n and j >= 0; i++) {
			b[i] = a[j];
			j--;
		}
	*/

	/*
		int b[n];
		for (int i = 0, j = n - 1; ((i < n) and (j >= 0)); i++, j--) {
			b[i] = a[j];
		}
	*/


	/*
		int b[n];
		int i = 0, j = n - 1;
		for (; ((i < n) and (j >= 0)); i++, j--) {
			b[i] = a[j];
		}
	*/

	//Approach 3:

	int c[n];

	for (int i = 0; i < n; i++) {
		c[i] = a[n - i - 1];
	}

	cout << endl;

	for (int x : c) {
		cout << x << " ";
	}

	//Approach 4:

	for (int i = 0; i < n / 2; i++) {

		//Swap the pairs : (a[i],a[n-i-1])

		int temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

	cout << endl;

	for (int x : a) {
		cout << x << " ";
	}




}