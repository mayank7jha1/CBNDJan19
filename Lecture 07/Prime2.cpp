/*
	Objective: Given a value n, check if it is prime or not.

	Logic: You have to check numbers from 2 to square root (n), and if any number divides this n then you can say n is not a prime number and if
	no number in the given range is able to divide n then you can say n is prime number.


	For the Time being logic: Go to range 2 to n-1.

*/

#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;


	int c = 2;//Starting Point


	//Ending Point
	while (c <= n - 1) {

		//Task:
		if ((n % c) == 0) {

			//This n is not a Prime Number.
			// cout << "Not Prime" << endl;

			//Instead of Return 0 if we write break here.
			break;
		}


		//Next State
		c += 1;
	}


	if (c < n) {
		//If my c is less than n that would mean I had found a number c which divides n and i had gone to the if block and through that if block
		//I got to line number 44 through break statement hence i can say n is not prime.
		cout << "Not Prime" << endl;

	} else {

		//I will come to this block only when c==n that would mean i never went inside the
		//if block because if i had c would not had reached to the value n because of break
		//statement.
		//What does the above statement means:
		//Since my c has reached n there was no number in range 2 to n-1 that divides n.
		//hence a prime number.

		//As soon as you reach line 35 you will be standing here at line 43.
		cout << "Prime" << endl;//In my comments this is the line 44.
	}

}



/*

	Issue: I am Printing Prime and Not Prime both in case of a not prime number.
	Ex: 18



	In case of Not Prime number what is happening is: We are going inside the
	if block and when break is encountered regardless if have gone to the if
	block or not we are printing prime number as output and hence
	both the output not prime and prime is getting printed.

	Line 44 is running unconditionally.

	I would want if i have come from the break statement or the if block in the
	while loop i don't want to run this line 44 else i want to run this line 44.


	How to Resolve this :

	Is there a way to ensure that line 44 only runs in case of a prime number?




*/
