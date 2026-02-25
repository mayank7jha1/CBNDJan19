#include<iostream>
using namespace std;


/*
	Till the time I give you values Read those values and give me the sum.
	cin cannot read white spaces.
*/


int main() {


	int sum = 0;
	int x;

	while (cin >> x) {
		sum += x;
	}

	cout << sum << endl;


}