#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, count = 0;
	std::cin >> N;

	for (int i = 2023; i <= N; i++)
	{
		std::string S = std::to_string(i);
		std::string compare = "2023";

		bool flag = true;
		size_t pos = 0;

		for (auto& C : compare)
		{
			pos = S.find(C, pos); // 0, 1, 2, 3번 idx부터 S의 2, 0, 2, 3 탐색

			if (pos == std::string::npos) // 못찾았으면 나가리
			{
				flag = false;
				break;
			}

			pos++; // break 안됨 --> 찾음 --> pos 옮겨줌
		}

		if(flag)
			count++;
	}

	std::cout << count;
	return 0;
} 