#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<std::string, int> A, std::pair<std::string, int> B)
{
	return A.first < B.first;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int S, E; std::cin >> S >> E;
	std::string nums[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	std::vector<std::pair<std::string, int>> V;
	
	for (int i = S; i <= E; i++)
	{
		int num = i;
		std::string tmp;
		
		if (num < 10)
			tmp += (nums[num] + " ");
		else
			tmp += nums[num / 10] + " " + nums[num % 10];
		
		V.push_back({tmp, num});
	}

	std::sort(V.begin(), V.end(), cmp);

	for (int i = 0; i < (E - S + 1); i++)
	{
		std::cout << V[i].second << ' ';
		if (i % 10 == 9)
			std::cout << '\n';
	}

	return 0;
}