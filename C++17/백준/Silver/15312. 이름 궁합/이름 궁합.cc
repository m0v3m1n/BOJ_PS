#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string A, B;
	int ALP[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
	std::vector<int> V;

	std::cin >> A >> B;
	for (int i = 0; i < A.size(); i++)
	{
		V.push_back(ALP[A[i] - 'A']);
		V.push_back(ALP[B[i] - 'A']);
	}

	while (V.size() != 2)
	{
		for (int i = 0; i < V.size() - 1; i++)
			V[i] = (V[i] + V[i + 1]) % 10;
		V.pop_back();
	}

	std::cout << V[0] << V[1];
	return 0;
}