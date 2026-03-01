#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Bubble Sort :
	//Less than n from 0 : 0 se n-1 tak. i.e. n times.
	for (int i = 0; i < (n - 1); i++) {

		/*	This above loop tells me how many times I have to perform my task
			which is n-1 times as last element is always sorted.
			0 --> n-2 times loop  means n-1 times run hoga.

			Current task ke liye mujhe kya karna hain:
			Task i : Mujhe n-i-1 times adjacent element ko compare karna hain
			and end me put karna hain by different implementation.
		*/

		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				//Swap them:
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}

