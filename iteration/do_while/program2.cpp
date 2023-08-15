#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	do
	{
		cout << x << " ";
		x--;
	} while (x > 5);

	cout << endl
		 << "Writing output file" << endl;
	ofstream fout("program2_output.txt");
	cin >> x;
	do
	{
		fout << x << " ";
		x--;
	} while (x > 5);
	fout.close();
	return 0;
}
