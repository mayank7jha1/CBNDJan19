#include<iostream>
using namespace std;


int main() {

	int x{10};
	int *ptr = &x;
	int **xptr = &ptr;
	int ***xxptr = &xptr;


	cout << x << endl;
	cout << &x << endl;
	cout << *x << endl;
	cout << *(&x) << endl;
	cout << &(*x) << endl;
	cout << xptr << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *(&ptr) << endl;
	cout << &(*ptr) << endl;
	cout << &xptr << endl;
	cout << *(xptr) << endl;
	cout << *(&xptr) << endl;
	cout << &(*xptr) << endl;
	cout << xxptr << endl;
	cout << *xxptr << endl;
	cout << &xxptr << endl;
	cout << *(&xxptr) << endl;
	cout << **xxptr << endl;
	cout << **(&xxptr) << endl;




}