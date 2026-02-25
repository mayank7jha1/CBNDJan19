#include<iostream>
using namespace std;


int main() {

	//In this wrong solution we are counting the total 1 and total 0 but we need consecutive 7--> 1's or 0's.
	char ch;
	int Count0 = 0, Count1 = 0;

	while (cin >> ch) {
		if (ch == '0') {
			Count0 += 1;
		} else {
			Count1 += 1;
		}
	}

	if (Count0 >= 7 or Count1 >= 7) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}