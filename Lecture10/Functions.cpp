#include<iostream>
using namespace std;

//Function Prototype
int sum(int, int);


//Function Definition : Install
int sum(int x, int y) {
	return x + y;
}


int main() {

	int a, b;
	cin >> a >> b;

	cout << sum(a, b) << endl;;//Function Call : Click

	int ans = sum(a, b);//Function Call
	cout << ans << endl;

}



