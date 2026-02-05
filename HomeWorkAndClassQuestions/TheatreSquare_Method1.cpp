//https://codeforces.com/problemset/problem/1/A

#include<iostream>
using namespace std;


int main() {

	int n, m, a;
	cin >> n >> m >> a;

	int ansr = (n / a);
	int ansc = (m / a);

	if ((n % a) != 0) {
		ansr += 1;
	}

	if ((m % a) != 0) {
		ansc += 1;
	}

	cout << ansr*ansc << endl;
}