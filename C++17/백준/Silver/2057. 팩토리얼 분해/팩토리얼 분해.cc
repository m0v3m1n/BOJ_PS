#include <iostream>

int main()
{
	long long N, idx = 1; std::cin >> N;
	long long fact[21] = { 0, };

	fact[0] = 1;
	for (long long i = 1; i < 21; i++)
		fact[i] = fact[i - 1] * i; // 팩토리얼 배열 초기화.

	for (int i = 0; i < 21; i++)
		if (N < fact[i])
		{
			idx = i; // 제일 가까우면서 큰 팩토리얼 선정.
			idx--; // fact[idx]는 N보다 작은 가장 큰 팩토리얼
			break;
		}

	if (N == 0)
		std::cout << "NO";
	else if (N == 1)
		std::cout << "YES";
	else
	{
		while (idx >= 0)
		{
			if (N > fact[idx])
				N -= fact[idx];
			else if (fact[idx] == N)
			{
				std::cout << "YES";
				return 0;
			}
			idx--;
		}
		std::cout << "NO";
	}
}