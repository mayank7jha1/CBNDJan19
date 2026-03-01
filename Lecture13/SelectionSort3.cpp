#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Selection Sort:
	for (int i = 0; i < (n - 1); i++) {

		int CurrentMiniIndex = i;//Assumption  : ith index element is the smallest.
		/*
			I am Performing Task i : Find the minimum is range
			i to n-1.

			int CurrentMinIndex=-1;
			for (int j = i; j < n; j++) {
			if (a[j] < a[CurrentMiniIndex]) {
				CurrentMiniIndex = j;
			}
		}

		*/

		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[CurrentMiniIndex]) {
				CurrentMiniIndex = j;
			}
		}

		int temp = a[i];
		a[i] = a[CurrentMiniIndex];
		a[CurrentMiniIndex] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}

