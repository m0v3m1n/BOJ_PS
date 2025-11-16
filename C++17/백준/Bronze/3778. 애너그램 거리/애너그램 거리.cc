#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N, cnt; std::cin >> N;
	std::cin.ignore();

	for (int i = 1; i <= N; i++)
	{
		cnt = 0;
		std::string a, b;

		std::getline(std::cin, a);
		std::getline(std::cin, b);

		std::vector<int> A('Z' - 'A' + 1, 0), B('Z' - 'A' + 1, 0);
		for (auto& K : a)
			A[K - 'a']++;
		for (auto& K : b)
			B[K - 'a']++;

		for (int j = 0; j < A.size(); j++)
			cnt += std::abs(A[j] - B[j]);

		std::cout << "Case #" << i << ": " << cnt << '\n';
	}

	return 0;
}