/*
XXXXX
_XXXX
__XXX
___XX
____X

*/

#include<iostream>
using namespace std;



int main() {

	int n;
	cin >> n;

	int r = 1;

	while (r <= n) {
		int c = 1;
		while (c <= n) {

			//I am at a box r,c.

			if (r <= c) {
				cout << "X";
				// c += 1;
			} else {
				cout << " ";
				// c += 1;
			}

			c += 1;
		}

		cout << endl;
		r += 1;
	}


}



/*

	Current : Github and Homework (Coding HomeWork).g


	Agenda:

	1. I will provide you github that will contain all the code of the flowchart done in the class
	just look my searching the name of the question this will be only for reference.


	2. Class notes C++ related.
	3. Try to convert all the flow charts to codes even of those given in the homework.


	4. If you don't have an ide try to write your code on one compiler and save those file.

	5. If any candidate has done all these then that candidate can attempt the coding
	assignment provided in group description.



	Mera Task:Wednesday ko long class lenge timings : Option 8 se 1 a.m. tak ek long class lunga.
	Discussion regarding all the question of flowchart and homework and ide installation.
	More questions.

*/