#include <iostream>
#include <algorithm>
#include <vector>

bool cmp(std::pair<std::string, std::pair<int, int>> A, std::pair<std::string, std::pair<int, int>> B)
{
	if (A.second.second == B.second.second)
		return A.second.first < B.second.first;
	else
		return A.second.second > B.second.second;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	while (1)
	{
		int N, max;
		double height;
		std::string name;

		std::cin >> N;
		if (!N)
			break;

		std::vector<std::pair<std::string, std::pair<int, int>>> V(N);

		for (int i = 0; i < N; i++)
		{
			std::cin >> name >> height;
			height *= 100; // 100 곱해서 세 자릿수로 변경 --> int 연산
			V.push_back(std::make_pair(name, std::make_pair(i, (int)height)));
		}

		std::sort(V.begin(), V.end(), cmp);
		max = V[0].second.second; // 100 곱해진 값

		for (int i = 0; i < N; i++)
			if (V[i].second.second < max)
				break;
			else
				std::cout << V[i].first << ' ';

		std::cout << '\n';
	}

	return 0;
}