#include<iostream>
using namespace std;


int main() {

	int t;
	cin >> t;


	//Computations : ~1000*8*10^15 ~ 8*10^19
	for (int i = 1; i <= t; i++) {


		int n;
		cin >> n;

		int freq[10] {};//Because there can only be 10 digits.

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;//I am doing this because we don't need the input array.
			x %= 10;//For Last digit of the number given by user.

			//Updation of freq. of the last digit given by the user.
			//If the freq of the current digit is 3 or greater than 3 we will not update the freq anymore.
			if (freq[x] < 3) {
				freq[x]++;
			}
		}


		int na[30] {};
		int k = 0;//Currently mere na array me kitne elements hain aur new element jo
		//aapko add karna hain na array me vo konse index par karna hain.

		//Expand the freq array and fill the na vala array.
		for (int i = 0; i < 10; i++) {

			int cd = i;
			int cdf = freq[i];

			//Idea: Current digit ko na vale array me freq of current digit times daal do.
			while (cdf > 0) {
				na[k] = cd;
				k++;
				cdf--;
			}
		}

		//Now You have your na vala array. Brute force laga sakte ho.

		int flag = 0;
		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				for (int k = j + 1; k < n; k++) {
					if ((na[i] + na[j] + na[k]) % 10  == 3) {
						cout << "Yes" << endl;
						flag = 1;
						break;
					}
				}
				if (flag) {
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}

		if (flag == 0) {
			cout << "No" << endl;
		}


	}


}

