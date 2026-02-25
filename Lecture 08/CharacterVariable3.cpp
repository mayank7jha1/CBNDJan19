#include<iostream>
using namespace std;


int main() {

	char ch;
	// while (cin >> ch) {
	// 	cout << ch;
	// }

	//This below method is going to read the white spaces also.
	//cin.get(ch);//Ek character ko fetch karega.
	//Reading character by character.

	while (cin.get(ch)) {
		cout << ch;
	}

}

