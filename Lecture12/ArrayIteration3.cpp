#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int a[n];// User can give n as a negative value. User can also give n as 0

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];//This will make no sense as current a[i] before taking input is zero.
		cin >> a[i];

		sum += a[i];//Now a[i] has a value.
		cout << a[i] << " ";//You can print the current box.
	}



	// for (int i = 0; i < n; i++) {
	// 	sum += a[i];
	// 	cout << a[i] << " ";
	// }

	// cout << endl;

	// // for (int i = 0; i < n; i++) {
	// // 	sum += a[i];
	// // }

	// cout << sum << endl;


}