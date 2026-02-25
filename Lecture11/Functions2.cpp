#include<iostream>
using namespace std;

void sum(int x, int y) {

	//This above x and y are two seperate variable than that of the
	//x and y defined in main.

	x += 10;
	cout << x << endl;


	return;
}


int main() {

	int x{10}, y{25};

	cout << x << endl;
	sum(x, y);//Call by Value

	cout << x << endl;


}