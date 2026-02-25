#include<iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

int sum2(int a, int b) {
	return a + b;
}


int main() {

	int x{10}, y{25};

	cout << sum(x, y) << endl;
	int ans = sum(10, 25);
	cout << ans << endl;

	int ans2 = sum2(x, y);
	cout << ans2 << endl;

	//cout << a << endl;  Not Allowed.

}