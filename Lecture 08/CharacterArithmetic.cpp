#include<iostream>
using namespace std;


int main() {

	char ch{'A'};
	ch += 32;

	char ch1{'a'};
	ch1 -= 32;

	cout << ch << endl;
	cout << ch1 << endl;

	if (ch >= 97 and ch <= 122) {
		//This is a small character
		ch = ch - 32;
	} else if (ch >= 65 and ch <= 90) {
		//This is a capital character
		ch = ch + 1;
	}

	/*
		A: 65
		B: 66





		a: 97
		b: 98


	*/

}