#include <iostream>
#include <vector>

bool arr[1000000];

int main()
{
	std::vector<long long> V;

	for (int i = 2; i < 1000000; i++)
		if (arr[i] == false) // 만약 임마가 소수면?
		{
			V.push_back(i);
			for (int j = i + i; j < 1000000; j += i)
				arr[j] = true;
		}

	int N; std::cin >> N;

	while (N--)
	{
		long long NUM; std::cin >> NUM;

		for (int i = 0; i < V.size(); i++)
			if (NUM % V[i] == 0) // 나누어지면 컽.
			{
				std::cout << "NO" << '\n';
				break;
			}
			else if (i == V.size() - 1 && NUM % V[i] != 0) // 끝까지 돌았는데 안나누어지면?
				std::cout << "YES" << '\n';

	}
	return 0;
}