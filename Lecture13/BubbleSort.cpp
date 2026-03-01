#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Find the largest element and put it in its correct position:
	int largestIndex = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] > a[largestIndex]) {
			largestIndex = i;
		}
	}

	int temp = a[largestIndex];
	a[largestIndex] = a[n - 1];
	a[n - 1] = temp;

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}

