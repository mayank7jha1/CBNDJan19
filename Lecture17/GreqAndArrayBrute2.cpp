#include<iostream>
using namespace std;
int n, m, k;
const int N = 1e5 + 5;
int a[N] {};
int l[N] {}, r[N] {}, d[N] {};



int main() {

	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	//Query : Computations : k*m*n  times : 10^15
	for (int i = 1; i <= k; i++) {

		int x, y;
		cin >> x >> y;

		//Operation :
		for (int j = x; j <= y; j++) {

			//Original Array Update :
			for (int p = l[j]; p <= r[j]; p++) {
				a[p] += d[j];
			}

		}
	}


	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}





}