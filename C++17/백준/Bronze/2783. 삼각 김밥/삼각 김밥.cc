#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	double X, Y, Sgsb;
	int N;

	std::cin >> X >> Y >> N;
	std::vector<double> gsbV(N + 1); gsbV[0] = X / Y;

	for (int i = 1; i <= N; i++)
	{
		std::cin >> X >> Y;
		gsbV[i] = X / Y;
	} 

	std::sort(gsbV.begin(), gsbV.end());

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << gsbV[0] * 1000;
}