#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int c = 0;
	int d = 0;
	while (c < 17)
	{
		if (c % 4 == 0)
		{
			cout << c << "/" << d << " ";
			d++;
		}
		c++;
	}

	// now write to program4_output.txt
	c = 0;
	d = 0;
	ofstream fout;
	fout.open("program4_output.txt");
	while (c < 17)
	{
		if (c % 4 == 0)
		{
			fout << c << "/" << d << " ";
			d++;
		}
		c++;
	}
	fout.close();
	return 0;
}
