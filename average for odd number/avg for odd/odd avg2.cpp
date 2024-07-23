#include<iostream>
using namespace std;
int main() {
	int range;
	cout << "Enter range:\n";
	cin >> range;
	cout << "============================\n";
	int sum = 0, c = 0;
	for (int i = 0; i <= range; i++) {
		if (i % 2 != 0) {
			sum += i;
			c++;
		}
	}
	cout << "average of odd numbers is :" << sum / c << endl;
	return 0;
}
