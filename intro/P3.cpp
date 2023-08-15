#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

using std::pow;
using std::setprecision;

int main()
{
	double priita_money, lungtoo_money;
	double gg_rate, snp112_rate;
	int num_year;
	cout << "Priita based money: ";
	cin >> priita_money;
	cout << "Fund gg rate: ";
	cin >> gg_rate;
	cout << "Lungtoo based money: ";
	cin >> lungtoo_money;
	cout << "S&P 112 rate: ";
	cin >> snp112_rate;
	cout << "Enter num year: ";
	cin >> num_year;

	// multiply by exponential factor
	priita_money *= pow((1 + gg_rate / 100), num_year);
	lungtoo_money *= pow((1 + snp112_rate / 100), num_year);

	// output to console
	cout << "Priita final money: " << setprecision(14) << priita_money << endl;
	cout << "Lungtoo final money: " << setprecision(14) << lungtoo_money << endl;
	return 0;
}
