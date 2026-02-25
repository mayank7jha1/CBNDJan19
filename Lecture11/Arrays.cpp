#include<iostream>
using namespace std;


int main() {


	//It is compulsory to give sizes in case of static arrays.

	int a[5];

	int a1[5] {0};//All the blocks will be assigned with value 0.

	int a3[5] {4, 2};//First block ke pass jo value hain vo 4 hain,second ke pass 2 hain and baaki sabme 0 hain.


	int a2[5] {};//Value initialisation : All the values will be initialised with zero.

	int a4[] {2, 4, 9};//This means you have defined an array of size 3 only.

	int a5[] {0};
	int a6[] {};



	int b[5] {9, 7, 5, 3, 12};

	cout << b << endl;//6422172
	cout << b + 1 << endl;//6422176
	cout << b + 2 << endl;//6422180

	cout << *b << endl;
	cout << *b + 1 << endl; //10
	cout << *(b + 1) << endl; //7

	//Since all the index/jump of the array are in linear increasing manner
	//I can just apply a loop over it.

	int i = 0;
	while (i < 5) {
		cout << *(b + i) << " ";
		i += 1;
	}

	cout << endl;
	int j = 0;
	while (j < 5) {
		cout << b[j] << " ";
		j += 1;
	}

	/*
		[] : 1. Definition of array.
			 2. Value of operator.

		*(b+2) ------> b[2];


	*/

	cout << endl << b[2] << endl;
	b[2] += 10;
	*(b + 2) += 10;

	cout << b[2] << endl;



	int c[5] {9, 7, 2, 1, 19};
	c[25] = 90; //Kya ye allowed hoga? This should not be allowed.
	//But it is allowed.


	//c[25] : Technically ek box in memory  whose value you are updating.
	//*(c+25)=90
	//c+25 : Kya ye ek valid address hain.

	//You can go to this box , even update its value but and big but :
	//compiler has not reserved this box for your array.

	cout << c[25] << endl;
	int p{78};
	cout << c[25] << endl;




}