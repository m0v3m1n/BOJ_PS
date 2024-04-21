#include <iostream>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::map<int, int> M;
	int N, cow, dir, count = 0;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> cow >> dir;

		if (M.find(cow) == M.end())
			M[cow] = dir;
		else if(M[cow] != dir)
		{
			M[cow] = dir;
			count++;
		}
	}

	std::cout << count;
	return 0;
}