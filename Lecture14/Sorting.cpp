#include<iostream>
using namespace std;
#define endl '\n'

/*
	int n=100;
	int e[n]{};Not allowed as it creates ambuiguity.

*/

const int p = 100;
int c[p] {2, 5, 4, 3, 2, 1, 6, 7, 8};

int d[100] {};


/*
	Comparators : These will only return true/false.

	Computation : Amount of times you program does work without considering input and
	output statements in general scenrio but do consider them if they are part of your
	algorithm.

	Task  : Try to write the number of computation of your current program in terms of
	input provide.

	Codeforces / Leetcode :
	1 sec : 10^8 Computation. (Server Side Ka time alloted).


	If you use more computation than the time provided: Error : Time Limit Exceeded.

	Obversation : Selection Sort me no matter what type of array it is : Computations are
	n*n order ki.
	Bubble me if the array is entirely unsorted computation aarahi thi n*n order ki but
	if the array is somehow sorted after certain operations so computations will tend
	towards n ke order ki.

	Aplications : Selection Sort can be used in an industry where Relative ordering is importing
	while sorting i.e. less swaps are required. Example : Shipment/Cargo.

	Bubble Sort : Relative ordering is not maintained hence is used where speed requirement is more.

	T1 : 1 4 3 2 5 7 8 8 9 9 12 12 9 9 9 9 9 9


	Scope : Main/Functional Scope
	Global Scope : (Larger Memory than any functional scope.)

	Max size array that you can create in the functional/main scope of your computer : 10^5 size ka
	lekin same kaam agar aap online judge me karoge to aap 10^6 size ka array bana sakte ho. (Only one)

	Max size of an array that you can create in global scope of your computer : 10^7 and online
	judge me aap 10^8 tak bana sakte ho. (Only one.)

	Global scope kyuki sirf memory ka part hain usme
	computations are not allowed.

	cout<<x<<endl;//NOt allowed in global scope.

*/

bool compare(int &x, int &y) {
	if (x > y) {
		return false;
	} else {
		return true;
	}
}

//Pass By Reference : &x is a reference variable for a[i] or an alias of a[i].
void Swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void BubbleSort(int *a, int n) {

	//I can Access c array here directly  :

	for (int x = 0; x < n - 1; x++) {
		/*
			Current Task : Task x: Find the maximum in range  : [0, n - x - 1]
			and put it at the end.
		*/
		int flag = 0;
		for (int i = 0; i < n - x - 1; i++) {

			/*
				Comparators : These are functions that tell you how each and
				every element is being compared with each other in the current
				container/Data Structure.
			*/
			if (compare(a[i], a[i + 1]) == 0) {
				//Swap:
				Swap(a[i], a[i + 1]);
				flag = 1;
			}
			// break;
		}

		//You will be here.

		if (flag == 0) {
			//I have not swapped any element in my current task that means my array
			//is now sorted.
			break;//Jump Statement : THis is used to get out of repeat statement.
		}//This is conditional statement bracket.
	}

	//After Break You will be here.

	return;
}

void SelectionSort(int *a, int n) {

	for (int x = 0; x < n - 1; x++) {

		/*
			Current Task : Find minimum in range [x,n-1] and swap it with
			a[x].
		*/

		int miniIndex = x;//Assuming till xth index form xth index minimum is a[x].
		for (int i = x + 1; i < n; i++) {
			if (a[i] < a[miniIndex]) {
				miniIndex = i;
			}
		}

		//Swap them:
		Swap(a[miniIndex], a[x]);
	}
}

void PrintArray(int *a, int n) {
	//Please Don't use for each loop here.
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	cout << "------------------------------------" << endl;
}


int main() {

	int n;
	cin >> n;
	int a[n] {}, b[n] {};

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	BubbleSort(a, n);
	PrintArray(a, n);
	SelectionSort(b, n);
	PrintArray(b, n);
}