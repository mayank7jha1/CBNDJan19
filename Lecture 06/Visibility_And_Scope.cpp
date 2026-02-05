#include<iostream>
using namespace std;


int main() {

	int x{10};
	int p{50};

	while (x <= 12) {

		//int p{50};

		cout << x << " ";

		p += 10;
		x += 1;

	}


	//When You are standing here: You cannot access the contents of the box while.

	cout << x << " ";
	cout << p << endl;

}