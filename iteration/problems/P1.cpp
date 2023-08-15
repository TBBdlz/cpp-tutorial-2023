#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	int other_divider;
	cout << "Input integer: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			other_divider = n / i;
			cout << i << "-" << other_divider << " ";
		}
	}
	cout << endl;
	return 0;
}
