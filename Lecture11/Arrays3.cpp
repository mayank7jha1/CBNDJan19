#include<iostream>
using namespace std;
// int n;
// int a[n];Not allowed here after int n;

// int p{90};
// int z[p];//This is also not allowed.

const int a = 10;
int z[a];//This is allowed.



int main() {

	//C++ me : Variable as a size nahi diya jaasakta for static arrays.

	int n;
	//int a[n];//This is not going to give an error. : Till this line n contains garbage value hence you have created your array of a size that you don't know.
	cin >> n;

	int a[n];

	// int i = 0;
	// while (i < n) {
	// 	cin >> a[i];
	// 	i += 1;
	// }

	// i = 0;
	// while (i < n) {
	// 	cout << a[i] << " ";
	// 	i += 1;
	// }

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}


	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}

	cout << endl;



	//ForEach Loop : ForEach Aap sirf container par lagate ho :
	//Abhi tak humne sirf ek container padha hain which array.

	//And this loop is for ALL THE ELEMENTS not skipping any.

	//For every element of this container (identifier) do the task mentioned below.


	//For every element of this array a that is going to be represented by this variable x do the
	//task mentioned.

	//Beginer do not do this loop for taking input use this loop only when you want all the elements
	//also you have values of all the boxes of the container.

	//Since it is fetching every element of the container it is going to run for the size of
	//the container.
	for (int x : a) {
		cout << x << " ";
	}

}