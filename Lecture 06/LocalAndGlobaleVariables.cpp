#include<iostream>
using namespace std;

int x = 10;

int main() {

	int x = 50;

	if (x > 10) {
		int x = 90;
		x += 1;
		cout << x << endl;
	}

	cout << x << endl;
	x += 10;

	while (x < 62) {//For this x compiler will try to find x above it. (Always remember also if you move out of a box that box is no longer in memory).
		x += 10;
		int x = 35;
		x += 10;
		cout << x << endl;
		x += 10;
	}

	cout << x << endl;
}