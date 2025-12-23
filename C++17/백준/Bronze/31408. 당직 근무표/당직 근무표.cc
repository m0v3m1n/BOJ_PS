#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp, max = 0, elseScedule = 0;
	std::cin >> N;

	std::vector<int> V(100001, 0);
	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		V[tmp]++;
	}
	for (int i = 0; i < 100001; i++) // 모든 숫자의 빈도수 더하기
	{
		elseScedule += V[i];

		if (max < V[i])
			max = V[i];
	} elseScedule -= max; // 전체 - 최대 = 나머지

	if (max - 1 > elseScedule)
		std::cout << "NO";
	else
		std::cout << "YES";

	return 0;
}