#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Optimised Bubble Sort :

	for (int i = 0; i < (n - 1); i++) {

		//Current Task is Task i:
		int flag = 0;

		for (int j = 0; j < n - i - 1; j++) {

			if (a[j] > a[j + 1]) {

				//Swap them:
				//If I have ever been inside this block for my current task
				//then i have performed swaping else I have not performed swaping.
				flag = 1;

				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}

		if (flag == 0) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}

