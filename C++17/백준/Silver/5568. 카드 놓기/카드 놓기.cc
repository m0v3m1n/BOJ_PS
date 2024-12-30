#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K; std::cin >> N >> K;

	std::vector<int> input(N);
	std::vector<int> permutation(N, 0);
	std::set<std::string> hash;

	for (int i = 0; i < N; i++)
		std::cin >> input[i];
	for (int i = N - K; i < N; i++)
		permutation[i] = 1;	

	do
	{
		std::vector<int> tmp;

		for (int i = 0; i < N; i++)
			if (permutation[i] == 1)
				tmp.push_back(input[i]);

		std::sort(tmp.begin(), tmp.end());

		do
		{
			std::string S;

			for (int i = 0; i < K; i++)
				S += std::to_string(tmp[i]);

			hash.insert(S);

		} while (std::next_permutation(tmp.begin(), tmp.end()));

	} while (std::next_permutation(permutation.begin(), permutation.end()));

	std::cout << hash.size();
}