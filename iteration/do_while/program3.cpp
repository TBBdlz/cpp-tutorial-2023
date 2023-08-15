#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i = 0, k = 10;
	while (i <= k)
	{
		i += 2;
		cout << i << "-" << k << " ";
	}

	// now write to program3_output.txt
	ofstream fout;
	fout.open("program3_output.txt");
	i = 0;
	k = 10;
	while (i <= k)
	{
		i += 2;
		fout << i << "-" << k << " ";
	}
	fout.close();
	return 0;
}
