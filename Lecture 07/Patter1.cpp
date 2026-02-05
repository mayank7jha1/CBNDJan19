/*
X
XX
XXX
XXXX
XXXXX

	Idea: I will go to every row and for my current row i will go the columns which satisfies the
	condition current row number >= column number.


*/

#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int r = 1;//Starting Point

	//Ending Point.
	while (r <= n) {

		//Task: For the current value of r go to the columns whose value is less than or equal to r.

		int c = 1;//Starting Point

		//Ending Point
		while (c <= r) {

			//It is a desired box.
			//Current Box : (r,c)
			cout << "X ";

			c += 1;//Next State
		}

		//This (r,c) is now not a desired box.
		cout << endl;
		r += 1;//Next State
	}

}