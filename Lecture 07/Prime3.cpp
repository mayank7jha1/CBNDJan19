#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	int c = 2;
	int flag = 1;//This is a variable whose value will only change when we go inside the if block at line 15.

	while (c <= n - 1) {
		if ((n % c) == 0) {
			flag = 0;
			break;
		}
		c += 1;
	}

	//Q: Is there a way to find out : If I have come to line 22 from line 17 (break) or not?

	if (flag == 0) {
		cout << "Not Prime" << endl;
	} else {
		cout << "Prime" << endl;
	}
}


