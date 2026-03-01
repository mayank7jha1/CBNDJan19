#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Try to find computation in terms of input (n).
	int computations = 0;

	// //Selection Sort:
	for (int i = 0; i < (n - 1); i++) {

		int CurrentMiniIndex = i;
		computations++;

		for (int j = i + 1; j < n; j++) {
			computations++;
			if (a[j] < a[CurrentMiniIndex]) {

				computations++;
				CurrentMiniIndex = j;
			}
		}

		computations++;
		int temp = a[i];
		a[i] = a[CurrentMiniIndex];
		a[CurrentMiniIndex] = temp;
	}

	cout << computations << endl;
	/*
		For a size of array n(5) : Computations are 22 i.e. of order (n^2).

		Computations : 3*n ==== ~n


	*/

	// int count = 0;

	// // Bubble Sort:
	// for (int i = 0; i < (n - 1); i++) {
	// 	count++;
	// 	int flag = 0;

	// 	for (int j = 0; j < n - i - 1; j++) {
	// 		count++;
	// 		if (a[j] > a[j + 1]) {
	// 			count++;
	// 			flag = 1;

	// 			count++;
	// 			int temp = a[j];
	// 			a[j] = a[j + 1];
	// 			a[j + 1] = temp;
	// 		}
	// 	}

	// 	count++;
	// 	if (flag == 0) {
	// 		break;
	// 	}
	// }

	// cout << count << endl;

	//Order : Count : ~n^2.

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }


}