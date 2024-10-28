#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	std::vector<int> pmt;
	std::vector<int> printing(N);

	for (int i = 1; i <= N; i++)
		pmt.push_back(i);

	do
	{
		for (auto& K : pmt)
			std::cout << K << ' ';
		std::cout << '\n';
	} while (std::next_permutation(pmt.begin(), pmt.end()));
}