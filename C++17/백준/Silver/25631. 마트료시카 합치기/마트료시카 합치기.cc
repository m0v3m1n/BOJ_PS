#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, count = 1; std::cin >> N;
	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end());

	std::vector<int> arr;
	for (int i = 0; i < N; i++)
	{
		if (arr.empty())
			arr.push_back(V[i]);
		else // 안 비어있으면?
		{
			for (int j = 0; j < arr.size(); j++)
				if (arr[j] < V[i])
				{
					arr[j] = V[i];
					break;
				}
				else
				{
					int idx = j;
					while (idx < arr.size() && arr[idx] == V[i])
						idx++;

					if (idx == arr.size())
						arr.push_back(V[i]);
					else
						arr[idx] = V[i];
					break;
				}
		}
	}

	std::cout << arr.size();
	return 0;
} 