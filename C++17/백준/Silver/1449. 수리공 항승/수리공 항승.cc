#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, L, sp = 0, idx = 0, tapes = 0;
	std::cin >> N >> L;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];// 파이프 구멍 뚫어주기

	std::sort(V.begin(), V.end());

	while (idx < N)
	{
		if (V[sp] + L > V[idx])
			idx++;
		else
		{
			sp = idx;
			tapes++;
		}
	}

	std::cout << tapes + 1; // 마지막 테이프 하나요 ㅋㅋ
	return 0;
}