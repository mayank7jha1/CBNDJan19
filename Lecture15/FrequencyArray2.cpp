#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;
	cin >> n;

	int a[n];
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}


	/*
		Pro :
			Computations : (~n) (Time).
			We are Printing the freq of elements in sorted manner.


		Cons :
			Since you can only create an array of size 10^7/10^8, so if the original array whose element's frequency you want to calculate has an element having value greater or equal to 10^8. We cannot implement this approach.

			You are using a very large array and sometimes it might be unnecessary.

		: 2Sum (Brute Force : Don't Study Two Pointers) n*n
		: 3Sum (Brute Force) : n*n*n
		: Array Assignment 3 : (Raat)

	*/
	int ShiftedFreq[maxi - mini + 1] {};

	for (int i = 0; i < n; i++) {
		int Element = a[i];
		int ShiftedElement = a[i] - mini;
		ShiftedFreq[ShiftedElement]++;
	}


	//We Are Trying to Iterate Over the ShiftedFreq Array.
	for (int i = 0; i < maxi - mini + 1; i++) {
		if (ShiftedFreq[i] > 0) {
			int ShiftedElement = i;
			int originalElement = i + mini;
			cout << originalElement << " ---> " << ShiftedFreq[i] << endl;
		}
	}

}