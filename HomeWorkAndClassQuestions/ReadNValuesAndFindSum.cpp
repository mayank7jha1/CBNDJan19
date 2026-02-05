#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int c = 1;
	int sum = 0;

	while (c <= n) {

		int x;//Remember Lecture 6 for the reason.
		cin >> x;

		sum += x;
		c += 1;
	}

	cout << sum << endl;

}