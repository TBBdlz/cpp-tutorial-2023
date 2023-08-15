#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	for (int i = 2; i <= 30; i += 4)
	{
		cout << i << ";";
	}

	ofstream fout("program2_output.txt");
	for (int i = 2; i <= 30; i += 4)
	{
		fout << i << ";";
	}
	fout.close();
	return 0;
}
