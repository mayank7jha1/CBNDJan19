#include<iostream>
using namespace std;
#define endl '\n'


int main() {

	int n;
	cin >> n;

	int a[n];// User can give n as a negative value. User can also give n as 0

	int sum = 0;

	for (int i = 0; i < n; i++) {
		// sum += a[i];
		cin >> a[i];
		sum += a[i];
		cout << a[i] << " ";
	}

	cout << endl;//This endl is for  : After Printing my array I want the sum of the array in next line.

	cout << sum << endl;

}