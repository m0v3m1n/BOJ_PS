#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string P, C;
	std::getline(std::cin, P); std::cin >> C;

	for (int i = 0; i < P.size(); i++)
	{
		if (P[i] != ' ')
			if (P[i] - (C[i % C.size()] - 'a') <= 'a')
				P[i] = 'z' - (C[i % C.size()] - P[i]);
			else
				P[i] -= (C[i % C.size()] - 'a') + 1;
	}

	for (auto& K : P)
		std::cout << K;
}