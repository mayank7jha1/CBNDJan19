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

	int flag = 0;

	for (int i = 0; i < n; i++) {

		//Current box is a[i] :
		if (a[i] == target) {
			cout << "Yes" << endl;
			break;
		}
	}


	cout << "No" << endl;//THis is a seperate line with respect to the above loop that means this line runs irrespective of the above loop.

	//Do I want to run the above line every time ? NO.
	//I want to run the above line only when i have not found the element.
	//The above statement means  : I want to run the no line only when i have not been
	// to the if block of the loop.

	//I need to find a way to check if i have ever been to the if block of the loop.

}