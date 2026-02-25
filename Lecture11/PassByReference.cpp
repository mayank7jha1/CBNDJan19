#include<iostream>
using namespace std;

void sum(int &a, int &b) {
	//a is another name for x and there is no a outside this sum.

	//Matlab is scope me / box me main jab bhi baat karunga a ki
	//iska matlab hain main x ki baat kar raha hu.

	// cout << x << endl : This will result in an error.

	a += 10;
	return;
}



int main() {

	int x{10}, y{25};
	sum(x, y);

	// cout << a << endl;//This is also not allowed.

	cout << x << endl;
}


//To a reference Variable : & : Operator
//Reference variable are alias of another variable.