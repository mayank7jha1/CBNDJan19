#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < (n - 1); i++) {
		//Inside this for loop means : You are currently performing Task i :

		/*
			Task i : Find the smallest element in range [i,n-1] and
			put it in ith index.
		*/

		int CurrentMiniIndex = i;//Preassuming the first element in the smallest only.

		/*
			You have assumed the mini element is at variable name
			CurrentMinIndex.

			Hence the minimum element you have assumed is  :
			a[CurrentMinIndex].

		*/

		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[CurrentMiniIndex]) {
				CurrentMiniIndex = j;
			}
		}


		//Swap the element at CurrentMinIndex with its correct position.
		//Correct Position is i.

		int temp = a[i];
		a[i] = a[CurrentMiniIndex];
		a[CurrentMiniIndex] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}

