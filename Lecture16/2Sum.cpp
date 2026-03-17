#include<iostream>
using namespace std;


int main() {


	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int target;
	cin >> target;

	for (int i = 0; i < n - 1; i++) {

		int ce = a[i];//Potential First element of the pair hain.

		//Idea: Will Try to find the second element which should be target-ce in array.

		int key = target - ce;
		for (int j = i + 1; j < n; j++) {
			if (key == a[j]) {
				cout << ce << " " << a[j] << endl;
			}
		}

	}




}

