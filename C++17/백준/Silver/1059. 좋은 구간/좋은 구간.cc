#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int L, N, under = 10000, sum = 0;

	std::cin >> L;
	std::vector<int> V(L);

	for (int i = 0; i < L; i++)
		std::cin >> V[i];
	std::sort(V.begin(), V.end());

	// 만약 N이 V 안에 있다면 0.
	std::cin >> N;
	for(auto& K : V)
		if (K == N)
		{
			std::cout << 0;
			return 0;
		}

	for (int i = 0; i < L; i++)
		if (V[i] > N)
		{
			under = i; // 가장 차이가 작으면서도 N보다 큰 숫자.
			break;
		}
	
	if (under == 0)
		for (int i = 1; i <= N; i++)
			for (int j = N; j < V[under]; j++)
				sum++;
	else
		for (int i = V[under - 1] + 1; i <= N; i++)
			for (int j = N; j < V[under]; j++)
				sum++;

	/*
	30, 50(N), 100 이라고 한다면?
	[31, 50], [31, 51], ... [31, 99]
	...
	[50, 51], [50, 52], ... [50, 99]
	*/

	std::cout << sum - 1;
	return 0;
}