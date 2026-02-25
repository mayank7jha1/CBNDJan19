#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int c{1};

	int sum{0};

	//Compound assignment cannot be used at the time of initialisation.

	while (c <= n) {

		int x;//This is allowed.

		// float x;Not Allowed
		// int x;
		cin >> x;

		sum += x;

		c += 1;
	}

	cout << sum << endl;

}