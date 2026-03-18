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

	int maxi = INT_MIN;
	// int mini = INT_MAX;

	int pre[n + 1] {};//Assume this pre[i] can never be negative.
	pre[0] = a[0];

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
		if (pre[i] > maxi) {
			maxi = pre[i];
		}
	}


	//Create a Freq array with respect to prefix array.
	int freq[maxi + 1] {};

	for (int i = 0; i < n; i++) {
		int oe = pre[i];
		freq[oe]++;
	}

	//Condition 1: If 0 as a element in prefix array has a freq > 0.
	if (freq[0] > 0) {
		cout << "Yes" << endl;
		return 0;
	}


	//Condition 2: If any element apart from 0 has a freq. greater than 1.
	for (int i = 1; i < maxi + 1; i++) {
		if (freq[i] > 1) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

}