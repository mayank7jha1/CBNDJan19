#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	// for (int i = 0; i < n - 2; i++) {

	// 	int ce = a[i];//Potential First element of the triplet.

	// 	//Idea : Try to find the pair whose sum is (target-ce) from i+1 to n.
	// 	for (int j = i + 1; j < n - 1; j++) {

	// 		int nce = a[j];//Potential First element of the pair. (You have fixed : (ce,nce,___));
	// 		int key = target - ce - nce;

	// 		// Idea : Linear Search for the third element of the triplet in rest of the array.

	// 		for (int k = j + 1; k < n; k++) {
	// 			if (key == a[k]) {
	// 				cout << ce << " " << nce << " " << a[k] << endl;
	// 			}

	// 		}
	// 	}
	// }


	// for (int i = 0; i < n - 2; i++) {

	// 	int ce = a[i];
	// 	for (int j = i + 1; j < n - 1; j++) {
	// 		int nce = a[j];
	// 		int key = target - ce - nce;
	// 		for (int k = j + 1; k < n; k++) {
	// 			if (key == a[k]) {
	// 				cout << ce << " " << nce << " " << a[k] << endl;
	// 			}
	// 		}
	// 	}
	// }



	//Computations : (n-2 * n-1 * n) :  ~n^3
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (a[i] + a[j] + a[k] == target) {
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
			}
		}
	}



}

