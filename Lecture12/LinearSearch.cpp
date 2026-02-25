#include<iostream>
using namespace std;

/*
	Given an array you need to check a element is present in the array or not?

*/


int main() {

	int n;
	cin >> n;

	int a[n];//Preassuming valid input is there.

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	for (int i = 0; i < n; i++) {
		//Current box is a[i] :
		if (a[i] == target) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	//If I am standing here : My Program didn't stop at line 30. That means I never went inside the if block this means no box of the array contains the element target and hence I can say element not found.

	cout << "No" << endl;





}