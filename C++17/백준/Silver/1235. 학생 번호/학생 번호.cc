#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<std::string> V(N);

	for(int i = 0; i < N; i++)
		std::cin >> V[i];

	int idx = V[0].size() - 1; // 마지막 자리부터 시작

	while (idx + 1)
	{
		std::string tmp;
		std::vector<std::string> check;

		for (int i = 0; i < N; i++)
		{
			for (int j = idx; j < V[0].size(); j++)
				tmp += V[i][j];

			if (std::find(check.begin(), check.end(), tmp) == check.end()) // 못찾았으면 추가.
				check.push_back(tmp);
			else // 찾았으면? --> 한 칸 더 땡겨야 함.
				break;

			tmp = ""; // tmp 초기화.
		}

		if (tmp != "") // 만약 끝까지 돌았다면 초기화 됐을 것. --> 초기화 안됐으면 break된거임.
			idx--;
		else
		{
			std::cout << V[0].length() - idx;
			break;
		}
	}
}