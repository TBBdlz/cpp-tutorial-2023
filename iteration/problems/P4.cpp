#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{ // row i again
		for (int j = 0; j <= i; j++)
		{ // now we are in row i, column j
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}