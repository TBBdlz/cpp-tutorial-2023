#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int c = 0;
	while (c < 30)
	{
		if (c % 2 == 0)
		{
			c += 3;
		}
		else
		{
			c += 5;
		}
		cout << c << "*";
	}
	cout << "Meow";

	// now write to program5_output.txt
	c = 0;
	ofstream fout;
	fout.open("program5_output.txt");
	while (c < 30)
	{
		if (c % 2 == 0)
		{
			c += 3;
		}
		else
		{
			c += 5;
		}
		fout << c << "*";
	}
	fout << "Meow";
	fout.close();
	return 0;
}
