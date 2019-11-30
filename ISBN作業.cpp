#include <iostream>
using namespace std;

int main() {
	int r = 0;
	int i;		

	cout << "請輸入isbn:";

	long long isbn;
	cin >> isbn;
	
	i += (isbn / 1000000000) * 10;
	isbn = isbn % 1000000000;

	i += (isbn / 100000000) * 9;
	isbn = isbn % 100000000;

	i += (isbn / 10000000) * 8;
	isbn = isbn % 10000000;

	i += (isbn / 1000000) * 7;
	isbn = isbn % 1000000;

	i += (isbn / 100000) * 6;
	isbn = isbn % 100000;

	i += (isbn / 10000) * 5;
	isbn = isbn % 10000;

	i += (isbn / 1000) * 4;
	isbn = isbn % 1000;

	i += (isbn / 100) * 3;
	isbn = isbn % 100;

	i += (isbn / 10) * 2;
	isbn = isbn % 10;

	for (r = 0; r < i;) {
		r += 11;
	}
	
	r -= i;

	if (r == isbn) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
