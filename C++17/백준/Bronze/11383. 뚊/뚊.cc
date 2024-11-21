#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int N, M;
	std::string str1, str2;
	
	std::cin >> N >> M;
	std::vector<std::string> p1(N), p2(N), stratched(N, "");

	for (int i = 0; i < N; i++)
		std::cin >> p1[i];

	for (int i = 0; i < N; i++)
		std::cin >> p2[i];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			stratched[i] += p1[i][j];
			stratched[i] += p1[i][j];
		}

	for (int i = 0; i < N; i++)
	{
		if (stratched[i] != p2[i])
		{
			std::cout << "Not Eyfa";
			return 0;
		}
	}

	std::cout << "Eyfa";
	return 0;
}