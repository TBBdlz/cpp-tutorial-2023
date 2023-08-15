#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// Function to solve a system of linear equations using Cramer's rule
vector<double> solveLinearSystem(const vector<vector<double>> &A, const vector<double> &b)
{
	int size = A.size();
	vector<double> solution(size);

	double detA = A[0][0] * A[1][1] * A[2][2] + A[0][1] * A[1][2] * A[2][0] + A[0][2] * A[1][0] * A[2][1] - A[0][2] * A[1][1] * A[2][0] - A[0][1] * A[1][0] * A[2][2] - A[0][0] * A[1][2] * A[2][1];

	for (int i = 0; i < size; ++i)
	{
		vector<vector<double>> tempA = A;
		for (int j = 0; j < size; ++j)
		{
			tempA[j][i] = b[j];
		}
		double detTempA = tempA[0][0] * tempA[1][1] * tempA[2][2] + tempA[0][1] * tempA[1][2] * tempA[2][0] + tempA[0][2] * tempA[1][0] * tempA[2][1] - tempA[0][2] * tempA[1][1] * tempA[2][0] - tempA[0][1] * tempA[1][0] * tempA[2][2] - tempA[0][0] * tempA[1][2] * tempA[2][1];

		solution[i] = detTempA / detA;
	}

	return solution;
}

int main()
{
	vector<vector<double>> A = {{6.0, -10.0, 5.0},
								{0.0, 10.0, 99.0},
								{-1.0, -1.0, 0.0}};
	vector<double> b = {-4.0, 10.0, -2.0};

	vector<double> solution = solveLinearSystem(A, b);

	cout << "x1 = " << solution[0] << endl;
	cout << "x2 = " << solution[1] << endl;
	cout << "x3 = " << solution[2] << endl;

	return 0;
}
