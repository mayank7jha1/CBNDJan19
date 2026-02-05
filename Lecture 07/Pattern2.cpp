/*
_ _ _ _ X
_ _ _ X X
_ _ X X X
_ X X X X
X X X X X

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

			//If I am standing here: My current box is : (r,c)
			if (r + c < n + 1) {
				cout << " ";
				// c += 1;
			} else {
				cout << "X";
				// c += 1;
			}

			//NO matter from which box if or else box you
			//have reached line 36 you need to increment
			//your column
			c += 1;
		}

		cout << endl;
		r += 1;
	}

	//Return 0;
}