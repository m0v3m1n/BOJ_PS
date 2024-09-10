#include <iostream>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, m, max;
	std::map<long long, long long > M;

	std::cin >> N;
	for (long long i = 0; i < N; i++)
	{
		std::cin >> m;
		if (M.find(m) == M.end()) // 없으면
			M[m] = 1;
		else
			M[m]++;
	}

	max = m; // 대충 아무거나
	for (auto& K : M)
		if (M[max] < K.second || (M[max] == K.second && max > K.first))
			max = K.first;

	std::cout << max;
	return 0;
}