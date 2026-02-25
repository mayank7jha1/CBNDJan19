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


	//INT_MAX : This returns maximum value a int variable can store.
	//INT_MIN : This returns minimum value a int variable can store.

	int ans = INT_MAX; //I want to initialise it with a value that can never become the answer also when I compare it with the first element of the array
	//the ans should be the first element.
	int maxi = INT_MIN;


	for (int i = 0; i < n; i++) {
		//ans variable store abtak ka minimum.
		//and agar abtak ka minimum is greater than the current element
		//you have found a minimum and hence update it.
		if (ans > a[i]) {
			ans = a[i];
		}

		if (maxi < a[i]) {
			maxi = a[i];
		}
	}

	cout << ans << endl;


	//Minimum
	// int ans = a[0];

	// for (int i = 1; i < n; i++) {
	// 	if (ans > a[i]) {
	// 		ans = a[i];
	// 	}
	// }


	//Maximum
	// int ans = a[0];

	// for (int i = 1; i < n; i++) {
	// 	if (ans < a[i]) {
	// 		ans = a[i];
	// 	}
	// }

	cout << INT_MAX << endl;

}