#include<iostream>
using namespace std;


int main() {

	int t;
	cin >> t;


	//Computations : ~1000*8*10^15 ~ 8*10^19
	for (int i = 1; i <= t; i++) {


		int n;
		cin >> n;
		int a[n];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int flag = 0;

		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				for (int k = j + 1; k < n; k++) {
					if ((a[i] + a[j] + a[k]) % 10  == 3) {
						cout << "Yes" << endl;
						flag = 1;
						break;
					}
				}
				if (flag) {
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}

		if (flag == 0) {
			cout << "No" << endl;
		}
	}


}

