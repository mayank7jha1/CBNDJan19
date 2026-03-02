#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int maxSubarray = 0;

	for (int sp = 0; sp < n; sp++) {

		//For My current Sp there can be multiple end points.
		for (int ep = sp; ep < n; ep++) {

			//My Current Subarray is [sp,ep].
			int sum = 0;
			for (int i = sp; i <= ep; i++) {
				sum += a[i];
			}

			cout << sum << endl;

			if (sum > maxSubarray) {
				maxSubarray = sum;
			}

			//cout << endl;
		}
		//cout << endl;
	}

	cout << maxSubarray << endl;

}