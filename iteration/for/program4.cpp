#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i = 3;
	for (i = 9; i;)
	{
		cout << i << ",";
		i--;
	}

	ofstream fout;
	fout.open("program4_output.txt");
	i = 3;
	for (i = 9; i;)
	{
		fout << i << ",";
		i--;
	}
	fout.close();
	return 0;
}
