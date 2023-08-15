#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	double v = 0, h, s = 0.0;
	double g = 9.81;
	int t = 0;
	cout << "Input height ";
	cin >> h;
	while (true)
	{
		// Calculate displacement s before updating v and t
		s = v * t + 0.5 * g * t * t;

		if (h - s <= 0)
			break;

		cout << "T = " << t << " ";
		cout << "v = " << v << " ";
		cout << "h = " << h - s << endl;

		v += g;
		t++;
	}
	return 0;
}
