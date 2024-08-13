#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, H, L, tmp, idx, dist; std::cin >> N;

	while (N--)
	{
		std::cin >> H >> L;

		dist = 0, idx = 0;
		std::vector<std::pair<int, std::deque<int>>> tower(H);

		for (int i = 0; i < H; i++)
		{
			tower[i].first = i;

			for (int j = 0; j < L; j++)
			{
				std::cin >> tmp;
				tower[i].second.push_back(tmp);

				if (tmp != -1)
					idx++;
			}
		}

		for (int i = 1; i <= idx; i++)
			for (int j = 0; j < H; j++)
				if (std::find(tower[j].second.begin(), tower[j].second.end(), i) == tower[j].second.end()) // 그 층에서 못찾았으면
					continue;
				else // 찾았으면?
				{
					for(int k = 0; k < L; k++)
						if (tower[j].second[k] == i) // i의 위치를 k라 했을 때,
						{
							int left = L - k;
							int right = k;

							if (left < right)
							{
								dist += (left * 5);
								for (int l = 0; l < left; l++)
								{
									tower[j].second.push_front(tower[j].second.back());
									tower[j].second.pop_back();
								}
							}
							else
							{
								dist += (right * 5);
								for (int l = 0; l < right; l++)
								{
									tower[j].second.push_back(tower[j].second.front());
									tower[j].second.pop_front();
								}
							}
						}
					dist += j * 20;
					break;
				}
		std::cout << dist << '\n';
	}
}