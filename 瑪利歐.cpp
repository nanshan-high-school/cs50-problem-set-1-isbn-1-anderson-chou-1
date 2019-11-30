#include <iostream>
using namespace std;

int main() {
	int high;
	
	do {
		cout << "請輸入高度:";
		
		cin >> high;
	} while (high < 1 || high > 8);
	
	int k = 0;
	int i = high;

	for (int i = high; i > 0; i--) {
		for (int times = i; times > 0; times--) {
			cout << " ";
		}

		for (int times2 = 0; times2 < high - i; times2++) {
			cout << "#";
		}
		cout << "\n";
	} 
	for (int times2 = 0; times2 < high; times2++) {
			cout << "#";
	}
}

