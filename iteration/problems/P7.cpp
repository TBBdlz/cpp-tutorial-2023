#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

using std::ceil;
using std::sqrt;

int main()
{
	int n;
	bool is_prime = true;
	cout << "Input number: ";
	cin >> n;
	int upper_bound = ceil(sqrt(n));
	if (n < 2) {
		is_prime = false;
	} else if (n > 2) {
		for (int i = 2; i <= upper_bound; i++)
		{
			if (n % i == 0)
			{
				is_prime = false;
				break;
			}
		}
	} // noted that if n == 2 it will be true
	if (is_prime)
	{
		cout << n << " is Prime" << endl;
	}
	else
	{
		cout << n << " is not Prime" << endl;
	}
}
