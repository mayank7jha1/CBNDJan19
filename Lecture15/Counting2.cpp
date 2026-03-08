#include<iostream>
#include<climits>
using namespace std;


//Computation : Constant with respect to input : 1 Computation:
bool compare(int &x, int &y) {
	if (x > y) {
		return false;
	} else {
		return true;
	}
}


//Computation : Constant with respect to input : 3 Computations
void Swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}


/*
	Worst Case Scenario : Complete Array is Unsorted : (n*n) Computations with respect to input.
	Best Case Scenario : Complete Array is Sorted : (n) Computations with Respect to input.
*/
void BubbleSort(int *a, int n) {
	for (int x = 0; x < n - 1; x++) {
		int flag = 0;
		for (int i = 0; i < n - x - 1; i++) {
			if (compare(a[i], a[i + 1]) == 0) {
				Swap(a[i], a[i + 1]);
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
	return;
}



/*
	Computations : (Maxi-mini+1)*n with Respect to Input.

	Pros :
		Frequency of every element will be in asc. order.

	Cons :
	Very Large and Unnecessary Computations.
	(Maxi-mini+1)*n : This number can be greater than n*n where n is the size of array.

	Ex: a[]{1000,1000,1,1};

*/
void Approach1(int *a, int n, int mini, int maxi) {
	for (int i = mini; i <= maxi; i++) {
		/*
				Linear Search for current element:
				Current element : i (Not a[i] as the above loop is on the element range)
				Count : frequency of the current element :
		*/

		int count = 0;

		for (int j = 0; j < n; j++) {
			if (a[j] == i) {
				count++;
			}
		}

		if (count > 0) {
			cout << i << " ---> " << count << endl;
		}
	}

	cout << "--------------------------------------" << endl;
	return;
}


/*
	Computations : (n*n)

	Pros :


	Cons :
		Freq. is not in sorted manner.
		Computations even though is smaller than approach 1 but still is very large. (n^2).
*/

void Approach2(int *a, int n) {

	for (int i = 0; i < n; i++) {
		//Current Element : a[i]
		//Idea: For my current element Linear Search and count its freq.
		int count = 0;
		int key = a[i];

		if (key == INT_MAX) {
			continue;
		}

		for (int j = 0; j < n; j++) {
			if (a[j] == key) {
				a[j] = INT_MAX;
				count++;
			}
		}

		cout << key << " ---> " << count << endl;
	}

	cout << "----------------------------------------" << endl;
	return;
}


/*
	Computations : (n*n) + (n*n)

	Pros :
		Freq. is not in sorted manner.

	Cons :
		Computations even though is smaller than approach 1 but still is very large. ~(n^2).
*/

void Approach3(int *a, int n) {
	BubbleSort(a, n);
	int PrevElement = INT_MAX;

	for (int i = 0; i < n; i++) {

		//Current Element : a[i]
		int CurrentElement = a[i];
		int count = 0;
		if (PrevElement == CurrentElement) {
			continue;
		}

		for (int j = 0; j < n; j++) {
			if (a[j] == CurrentElement) {
				count++;
			}
		}

		PrevElement = CurrentElement;//For the next element as we are moving towards next iteration new prevElement will be the CurrentElement

		cout << CurrentElement << " ---> " << count << endl;
	}

	cout << "----------------------------------------" << endl;
	return;
}


/*
	Computations : (n*n) + ((n-1)*(n-2))/2

	Pros :
		Freq. is not in sorted manner.

	Cons :
		Computations even though is smaller than approach 1 but still is very large. ~(n^2).

*/
void Approach4(int *a, int n) {
	BubbleSort(a, n);
	int PrevElement = INT_MAX;

	for (int i = 0; i < n; i++) {

		//Current Element : a[i]
		int CurrentElement = a[i];
		int count = 0;
		if (PrevElement == CurrentElement) {
			continue;
		}

		for (int j = i; j < n; j++) {
			if (a[j] == CurrentElement) { //n-1 + n-2 + n-3 + n-4 + _ _ _ _ _1
				count++;
			}
		}

		PrevElement = CurrentElement;//For the next element as we are moving towards next iteration new prevElement will be the CurrentElement

		cout << CurrentElement << " ---> " << count << endl;
	}

	cout << "----------------------------------------" << endl;
	return;

}


int main() {

	int n;
	cin >> n;

	int a[n];
	int mini = INT_MAX;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	Approach1(a, n, mini, maxi);


}