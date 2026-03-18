#include<iostream>
using namespace std;
int n, m, k;
const int N = 1e5 + 5; //(1*10^5+5) : +5 this is just for precaution and are extra element.

int a[N] {};//THis is wrong.
int l[N] {}, r[N] {}, d[N] {};

/*
	l[N],r[N],d[N] :
	Op5 : l[5] se lekar r[5] index tak a array d[5] ko add karo.
*/




int main() {

	cin >> n >> m >> k;

	//Taking input from 1 index.
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}


	//Taking input of query and simultaneously solving it.

	for (int i = 1; i <= k; i++) {

		int x, y;
		cin >> x >> y;

		/*
			For the current query Perform operation no x to operation no y.
		*/

		for (int j = x; j <= y; j++) {

			//Current Operation I am perfoming is j.

			/*
				Current Operation ko perform karne ka matlab hain :

				l[j] se lekar r[j] tak original array me d[j] ko
				add karo.
			*/

			for (int p = l[j]; p <= r[j]; p++) {
				a[p] += d[j];
			}
		}
	}


	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}





}