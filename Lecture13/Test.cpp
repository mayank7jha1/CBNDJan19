#include<iostream>
#include<climits>
using namespace std;


int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Find the minimum element and swap it with the first element.


	// int mini = INT_MAX;
	// int miniIndex = -1;

	/*
		You want 0th index tak ka minimum should be a[0] only.

	*/
	// for (int i = 0; i < n; i++) {
	// 	if (mini > a[i]) {
	// 		mini = a[i];
	// 		miniIndex = i;
	// 	}
	// }

	//cout << mini << endl;

	int miniIndex2 = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] < a[miniIndex2]) {
			miniIndex2 = i;
		}
	}

	cout << a[miniIndex2] << " " << miniIndex2 << endl;




	// int mini2 = a[0];//Oth index element is minimum.
	// //Now since I know the minimum till 0th index : Now i need to find minimum
	// //in range 1 to n-1.

	// for (int i = 1; i < n; i++) {
	// 	if (mini2 > a[i]) {
	// 		mini2 = a[i];
	// 	}
	// }

	// cout << mini2 << endl;

	int miniIndex3 = 0;//0th Index element is minimum.
	//Now since I know the minimum till 0th index : Now i need to find minimum in range 1 to n-1.

	for (int i = 1; i < n; i++) {
		if (a[miniIndex3] > a[i]) {
			miniIndex3 = i;
		}
	}

	cout << a[miniIndex2] << " " << miniIndex2 << endl;

}