#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) { // row i
		for (int j = 0; j < n; j++) { // column j
			cout << "*";
		}
		cout << endl; // new line after each row
	}
	return 0;
}