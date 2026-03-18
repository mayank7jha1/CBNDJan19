#include<iostream>
using namespace std;



//Static Range Query Problems : Type 1: Fetch Query
int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int pre[n + 1] {};
	pre[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}


	int q;
	cin >> q;

	//Computations : n+q
	while (q > 0) {
		int l, r;
		cin >> l >> r;

		//Current Query Resolution :
		/*
			int sum = 0;
			for (int i = l; i <= r; i++) {
				sum += a[i];
			}
			cout << sum << endl;
		*/

		//You have resolved the above range.
		if (l == 0) {
			cout << pre[r] << endl;
		} else {
			cout << pre[r] - pre[l - 1] << endl;
		}


		q--;
	}



}