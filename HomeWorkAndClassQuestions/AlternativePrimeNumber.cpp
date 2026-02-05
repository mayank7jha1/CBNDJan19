#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int c = 2;
	int countPrime = 0;


	while (c <= n) {
		int z = 2;
		int flag = 0;
		while (z <= c - 1) {
			if (c % z == 0) {
				flag = 1;
				break;
			}
			z += 1;
		}
		if (flag == 0) {
			countPrime += 1;
			if (countPrime % 2 == 0) {
				cout << c << " ";
			}
		}
		c += 1;
	}
}