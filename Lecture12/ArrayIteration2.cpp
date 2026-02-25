#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int a[n];// User can give n as a negative value. User can also give n as 0


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
		cout << a[i] << " ";
	}

	cout << endl;

	// for (int i = 0; i < n; i++) {
	// 	sum += a[i];
	// }

	cout << sum << endl;


}