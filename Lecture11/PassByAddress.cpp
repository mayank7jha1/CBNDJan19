#include<iostream>
using namespace std;

void sum(int *x, int *y) {

	// Is block me bhi variable are x and y. But they are pointers pointing to the x and y defined in main.
	//cout << x << " " << y << endl;

	//x += 10;//You are adding 10 to the current address of the variable x defined in main.
	*x += 10; //*(8015) isme aap 10 ko add kardo.

	cout << *x << endl;
	return;
}

void sum2(int *xptr, int *yptr) {
	//You have created two variable (Pointer Variable ) xptr and yptr.
	// xptr is a variable local to the function sum2 but any updatation
	// using xptr in x(defined in main) will result in the value
	// updatation in x(defined in main).

	*xptr += 10;


	return;
}




int main() {

	int x{10}, y{25};

	cout << x << endl;
	sum2(&x, &y);//Call by Address

	cout << x << endl;//Is this line ALLowed ? Yes!!

	// cout << xptr << endl;IS this line allwed?NO.


}


// x-->8015
// y-->9015