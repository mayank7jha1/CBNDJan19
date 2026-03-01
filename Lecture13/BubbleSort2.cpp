#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Bubble Sort: This is wrong Implementation.
	for (int i = 0; i < (n - 1); i++) {

		int CurrentMaxIndex = i;

		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[CurrentMaxIndex]) {
				CurrentMaxIndex = j;
			}
		}

		//Swap: (a[n-i-1] and a[CurrentMaxIndex])
		int temp = a[n - i - 1];
		a[n - i - 1] = a[CurrentMaxIndex];
		a[CurrentMaxIndex] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}

