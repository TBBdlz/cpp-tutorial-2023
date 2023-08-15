#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	for (int i = 0; i <= 7; i += 3)
	{
		if (i % 2 == 0)
			continue;
		for (int j = 9; j >= 2; j -= 2)
		{
			if (i * j == 9)
				break;
			cout << i << '-' << j << "";
		}
	}

	ofstream fout;
	fout.open("program2_output.txt");
	for (int i = 0; i <= 7; i += 3)
	{
		if (i % 2 == 0)
			continue;
		for (int j = 9; j >= 2; j -= 2)
		{
			if (i * j == 9)
				break;
			fout << i << '-' << j << "";
		}
	}
	fout.close();
	return 0;
}
