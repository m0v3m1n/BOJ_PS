#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, S, R, nagari, gimotti;

	std::vector<int> kayakNagari, kayakGimotti;

	std::cin >> N >> S >> R;
	for (int i = 0; i < S; i++)	{
		std::cin >> nagari;
		kayakNagari.push_back(nagari);
	}

	for (int i = 0; i < R; i++)
	{
		std::cin >> gimotti;
		if (std::binary_search(kayakNagari.begin(), kayakNagari.end(), gimotti)) // 만약 고장난 사람인데 여분이 있다면?
			for (int j = 0; j < kayakNagari.size(); j++)
				if (kayakNagari[j] == gimotti)
					kayakNagari.erase(kayakNagari.begin() + j); // Nagari에서 컽.
				else
					continue;
		else // 아니라면?
			kayakGimotti.push_back(gimotti); //여분 카약 벡터에 넣기.
	}

	for (int i = 0; i < kayakNagari.size(); i++)
	{
		if (std::binary_search(kayakGimotti.begin(), kayakGimotti.end(), kayakNagari[i] - 1)) // 번호 - 1에 여분이 있다면?
		{
			for (int j = 0; j < kayakGimotti.size(); j++)
				if (kayakGimotti[j] == kayakNagari[i] - 1)
					kayakGimotti.erase(kayakGimotti.begin() + j);
			kayakNagari[i] = -1;
		}
		else if (std::binary_search(kayakGimotti.begin(), kayakGimotti.end(), kayakNagari[i] + 1)) // 번호 + 1에 여분이 있다면?
		{
			for (int j = 0; j < kayakGimotti.size(); j++)
				if (kayakGimotti[j] == kayakNagari[i] + 1)
					kayakGimotti.erase(kayakGimotti.begin() + j);
			kayakNagari[i] = -1;
		}
	}

	int count = 0;
	for (auto& K : kayakNagari)
		if (K != -1)
			count++;
	std::cout << count;
	return 0;
}