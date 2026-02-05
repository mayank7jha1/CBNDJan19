/*
	Objective: Given a value n, check if it is prime or not.

	Logic: You have to check numbers from 2 to square root (n), and if any number divides this n then you can say n is not a prime number and if
	no number in the given range is able to divide n then you can say n is prime number.


	For the Time being logic: Go to range 2 to n-1.

*/

#include<iostream>
using namespace std;

//Lets say n=18:

//c=2 se lekar 17 tak har number par jaana hain and har number ko 18 se divide karke dekhna hain ki 18 divide hota hain ki nhi.

//Lets say n=21:
//c=2 se lekar 20 tak har number par jaana hain and check karna hain koi number 21 ko divide toh nahi karta.

int main() {

	int n;
	cin >> n;


	int c = 2;//Starting Point


	//Ending Point
	while (c <= n - 1) {

		//Task:
		if ((n % c) == 0) {

			//This n is not a Prime Number.
			cout << "Not Prime" << endl;

			//In flowchart, We stopped our algo here.
			//How do I achieve that in this code?
			return 0;//As Soon as this line is encountered your programs stops.
		}

		//Why is this wrong??
		// } else {
		// 	cout << "Prime" << endl;
		// }


		//Next State
		c += 1;
	}

	/*
		If you are standing here:
		This means you have never been to the if box in the while loop
		because if you had the program would have stopped there and you would not have reached at this line.

		If you have not been to the if block in the above while loop
		this means there was no number in the range 2 to n-1 that divides n
		completely and hence we can say n is a Prime number.
	*/

	cout << "Prime" << endl;

}