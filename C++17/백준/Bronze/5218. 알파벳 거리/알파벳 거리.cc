#include <iostream>
#include <string>
#include <cmath>

int main()
{
	int T;
	std::string A, B;

	std::cin >> T;
	while (T--)
	{
		std::cin >> A >> B;

		std::cout << "Distances: ";
		for (int i = 0; i < A.size(); i++)
			std::cout << (B[i] - A[i] >= 0 ? B[i] - A[i] : (B[i] + 26) - A[i]) << ' ';
		std::cout << "\n";
	}
}