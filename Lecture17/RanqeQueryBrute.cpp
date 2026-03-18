#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int q;
	cin >> q;


	//Computations : q*n : 10^10
	while (q > 0) {
		int l, r;
		cin >> l >> r;

		//Current Query Resolution :
		int sum = 0;
		for (int i = l; i <= r; i++) {
			sum += a[i];
		}
		cout << sum << endl;

		q--;
	}


}