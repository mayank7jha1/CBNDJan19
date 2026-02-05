//https://codeforces.com/problemset/problem/1/A

#include<iostream>
using namespace std;


int main() {

	int n, m, a;
	cin >> n >> m >> a;

	int ansr = ((n + a - 1) / a);
	int ansc = ((m + a - 1) / a);

	cout << ansr*ansc << endl;
}