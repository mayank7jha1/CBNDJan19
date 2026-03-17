#include<iostream>
#include<climits>
using namespace std;

void F1(int *a, int n) {

	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (maxi < a[i]) {
			maxi = a[i];
		}
	}

	//Assuming We only have +ve elements in a array.
	int freq[maxi + 1] {};

	//Step 1: Iterate over the original array and Build the freq. array.
	for (int i = 0; i < n; i++) {
		int ce = a[i];
		//Treat this ce as index of freq array and increase the count of freq[ce] by 1.

		freq[ce]++;
	}

	//Print the freq. array
	for (int i = 0; i < maxi + 1; i++) {

		//i : Element of the orginal array.
		//freq[i]  : its freq in original array.

		if (freq[i] > 0) {
			cout << i << " " << freq[i] << endl;
		}
	}

	cout << "------------------------------------" << endl;
}


void F2(int *a, int n) {
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (maxi < a[i]) {
			maxi = a[i];
		}
	}

	int mini = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (mini > a[i]) {
			mini = a[i];
		}
	}

	int freq[maxi - mini + 1] {};

	for (int i = 0; i < n; i++) {
		int oe = a[i];
		int se = oe - mini;
		freq[se]++;
	}


	for (int i = 0; i < maxi - mini + 1; i++) {

		if (freq[i] > 0) {

			int se = i;
			int oe = se + mini;
			int frequency = freq[i];//This is the freq of the oe in array a.

			cout << oe << " " << frequency << endl;

		}

	}

	cout << "------------------------------------" << endl;


}



int main() {

	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int b[n];

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	F1(a, n);
	F2(b, n);


}