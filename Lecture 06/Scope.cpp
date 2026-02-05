#include<iostream>
using namespace std;

int x = 90;//Global Variable
// x = 190;//Not Allowed
// x += 10;//Not Allowed






int main() {

	int x{10};
	int p{50};
	int y{50};

	while (x <= 12) {

		int p{10};
		p += 10;
		cout << p << endl;
		y += 10;
		x += 1;
	}


	cout << x << " " << p << " " << y << endl;

}