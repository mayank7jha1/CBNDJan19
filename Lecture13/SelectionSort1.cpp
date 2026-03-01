#include<iostream>
#include<climits>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Find the minimum element Index:
	int mini = INT_MAX;
	int miniIndex = -1;//Initialise it with a value jo answer na bann sake.
	//Index can never be negative.

	for (int i = 0; i < n; i++) {
		if (mini > a[i]) {
			mini = a[i];
			miniIndex = i;//Update the minimum index with i.
		}
	}
	/*
		int mini2 = a[0];
		int miniIndex2 = 0;
		for (int i = 1; i < n; i++) {
			if (mini2 > a[i]) {
				mini2 = a[i];
				miniIndex2 = i;//Update the minimum index with i.
			}
		}
	*/

	cout << mini << endl;
	cout << miniIndex << endl;

	//Swap the minimum element with the first element.
	int temp = a[0];
	a[0] = a[miniIndex];
	a[miniIndex] = temp;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}