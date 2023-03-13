// 백준 번호 9020번, 골드바흐의 추측
// 문제 링크 : https://www.acmicpc.net/problem/9020

#include <iostream>

int Prime[20002] = {};

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	// 2부터 10,000까지 소수 체크
	Prime[2] = 1;

	for (int i = 3; i < 10002; i += 2)
		Prime[i] = 1;

	int CheckingOdd = 3;

	while (CheckingOdd < 10002)
	{
		for (int j = CheckingOdd; j < 10002;)
		{
			j += CheckingOdd;

			if (j > 10002)
				break;

			Prime[j] = 0;
		}
		CheckingOdd += 2;
	}
	// 여기까지가 소수 체크 코드.

	int N;
	std::cin >> N;

	int X, Upper, Lower;

	for (int i = 0; i < N; i++)
	{
		std::cin >> X;

		Upper = (X / 2);
		Lower = (X / 2);

		while (Prime[Upper] == 0) // X / 2 에서 가장 가까우면서 X보다 큰 소수 찾기.
			Upper++;

		while (Prime[Lower] == 0) // // X / 2 에서 가장 가까우면서 X보다 작은 소수 찾기.
			Lower--;

		if (Upper + Lower == X) // 만약 Upper와 Lower의 합이 X면 그대로 출력.
			std::cout << Lower << ' ' << Upper << '\n';

		else
		{
			while (1)
			{
				while (Lower + Upper < X) // Lower + Upper가 X보다 작은 동안
				{
					Upper++; // 
					while (Prime[Upper] == 0) // 기존 Upper와 가장 가까운 소수 찾기.
						Upper++;
				}

				if (Lower + Upper == X) // 만약 기존 Lower와 새로운 Upper의 합이 X면
					break; // 반복문 탈출 후 출력.

				else // 합이 X가 아닌 경우,
				{
					Lower--;
					while (Prime[Lower] == 0) // 기존 Lower와 가장 가까운 소수 찾기.
						Lower--;
				}
			}

			std::cout << Lower << ' ' << Upper << '\n';
		}

	}

	return 0;
}
