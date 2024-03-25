#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#include <vector>

bool cmp(std::tuple<std::string, int, int, int> A, std::tuple<std::string, int, int, int> B)
{
	if (std::get<3>(A) == std::get<3>(B))
		if (std::get<2>(A) == std::get<2>(B))
			return std::get<1>(A) < std::get<1>(B);
		else
			return std::get<2>(A) < std::get<2>(B);
	else
		return std::get<3>(A) < std::get<3>(B);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<std::tuple<std::string, int, int, int>> V;

	std::tuple<std::string, int, int, int> T;
	for (int i = 0; i < N; i++)
	{
		std::cin >> std::get<0>(T) >> std::get<1>(T) >> std::get<2>(T) >> std::get<3>(T);
		V.push_back(T);
	}

	std::sort(V.begin(), V.end(), cmp);

	std::cout << std::get<0>(V[N - 1]) << '\n' << std::get<0>(V[0]);
	return 0;
}