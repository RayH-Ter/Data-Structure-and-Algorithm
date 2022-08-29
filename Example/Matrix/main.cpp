#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	double A[n][n];
	double b[n];
	double x[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> A[i][j];
	
	for (int i = 0; i < n; r++)
		std::cin >> b[i];

	std::cout << n << std::endl;
	
	for (int i = 0; i < n; i++)
	{	for (int j = 0; j < n; j++)
			std::cout << A[i][j] << "\t";
		std::cout << std::endl;

	}
	for (int i = 0; i < n; i++)
		std::cout << b[i] << "\t";
	std::cout << std::endl;

	for (int k = 0; k < n - 1; k++)
		for (int i = k + 1; i < n; i++)
		{
			double tmp = A[i][k] / A[k][k];
			for (int j = k + 1; j < n; j++)
			{
				A[i][j] -= A[k][j] * tmp;
			}
			b[i] -= b[k] * tmp;
		}

	for (int i = n - 1; i >= 0; i--)
	{
		double sum = 0.0;
		for (int j = i + 1; j < n; j++)
			sum += A[i][j] * x[j];
		x[i] = (b[i] - sum) / A[i][i];
	}

	for (int i = 0; i < n; i++)
		std::cout << x[i] << "\t";
	std::cout << std::endl;

	return 0;
};
