/*
XXXXX
XXXX
XXX
XX
X
*/


#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	cout << "Maghanl";

	int r = 1;
	while (r <= n) {

		int c = 1;
		while (r + c <= n + 1) {
			cout << "X";
			c += 1;
		}

		cout << endl;
		r += 1;
	}


}

