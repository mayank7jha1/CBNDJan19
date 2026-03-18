#include<iostream>
using namespace std;
int n, m, k;
const int N = 1e5 + 5;
int a[N] {};
int l[N] {}, r[N] {}, d[N] {};
int opc[N] {};
int difference[N] {};



int main() {

	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	//Query : Computations : 2*k+m +2*m+n : ~10^5+10^5+10^5 = ~3*10^5
	for (int i = 1; i <= k; i++) {

		int x, y;
		cin >> x >> y;

		//Operation : (Range)
		/*	for (int j = x; j <= y; j++) {
				opc[j]++;
			}
		*/
		opc[x]++;
		opc[y + 1]--;
	}

	//Take Prefix :
	for (int i = 1; i <= m; i++) {
		opc[i] = opc[i - 1] + opc[i];
	}

	//Konsa Operation Kitni bar karna hain :
	// for (int i = 1; i <= m; i++) {
	// 	cout << opc[i] << " ";
	// }

	// cout << endl;

	for (int i = 1; i <= m; i++) {
		//Current Operation  i:
		//Original Array Update : (Range)
		/*
			for (int p = l[i]; p <= r[i]; p++) {
				a[p] += (opc[i] * d[i]);
			}
		*/

		int x = l[i];
		int y = r[i];

		difference[x] += (opc[i] * d[i]);
		difference[y + 1] -= (opc[i] * d[i]);
	}

	//Take Prefix of difference array :
	for (int i = 1; i <= n; i++) {
		difference[i] = difference[i - 1] + difference[i];
		a[i] = a[i] + difference[i];
	}

	//Print the final array :
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}





}