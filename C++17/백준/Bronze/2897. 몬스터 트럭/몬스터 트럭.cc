#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int R, C; std::cin >> R >> C;

	std::vector<int> crash(5, 0);
	std::vector<std::string> map(R);

	for (int i = 0; i < R; i++)
		std::cin >> map[i];

	for (int i = 0; i < R - 1; i++)
		for (int j = 0; j < C - 1; j++)
			if (map[i][j] == '#') // 그 칸이 빌딩이라면?
				continue; // 나가리
			else
				if (map[i][j + 1] == '#' || map[i + 1][j] == '#' || map[i + 1][j + 1] == '#') // 빌딩 하나라도 있으면
					continue; // 나가리
				else // 빌딩이 없으면?
				{
					int car = 0;
					if (map[i][j] == 'X')
						car++;
					if (map[i][j + 1] == 'X')
						car++;
					if (map[i + 1][j] == 'X')
						car++;
					if (map[i + 1][j + 1] == 'X')
						car++;
					crash[car]++;
				}
	
	for (auto& K : crash)
		std::cout << K << '\n';
}