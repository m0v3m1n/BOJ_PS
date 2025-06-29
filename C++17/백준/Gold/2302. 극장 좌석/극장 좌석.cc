#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, M, sum = 1, prev = 1, cur;
	long long arr[41] = { 0, };
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i < 41; i++)
		arr[i] = arr[i - 1] + arr[i - 2]; // 4자리 --> arr[4]의 가짓수 존재

	std::cin >> N >> M;

	while (M--)
	{
		std::cin >> cur;
		// 예제 : 1~9, 고정석 2개, 4, 7. --> 1 2 3 | 5 6 | 8 9. 
		// 이때 최초 순회 시 cur = 4, prev = 1 --> 3칸
		sum *= arr[(cur - prev)];
		prev = cur + 1;
		// 다음 순회 시 cur = 7, prev = 5 --> 2칸
	}

	N++;
	sum *= arr[(N - prev)];
	std::cout << sum;
	return 0;
}