#include <iostream>
#include <string>
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, count = 0; std::cin >> N;
	int prime[1400] = { 0, };
	bool yi = false, im = false, is_prime = false;

	// 이면수 : 4 이상의 정수(5 제외) & 각 자릿수의 합이 홀수.
	if (N != 5 && N >= 4)
	{
		std::string S;
		S = std::to_string(N);

		int tmp = 0;
		for (int i = 0; i < S.size(); i++)
			tmp += (S[i] - '0');

		if (tmp % 2 == 1)
			yi = true;
	}

	// 임현수 : 2, 4 또는 합성수인데 소인수분해 시 소인수의 종류가 짝수개.
	if (N == 2 || N == 4)
		im = true;
	else
	{
		// 우선 소수 판정.
		for (int i = 2; i < N; i++)
			if (i == N - 1)
				is_prime = true;
			else
				if (N % i == 0)
					break;

		if (N == 1 || is_prime) // 1 --> 컽. || 소수면 합성수 아님 --> 컽.
			im = false;
		else // 1 아님, 소수 아님 --> 합성수.
		{
			while (N != 1)
				for (int i = 2; i <= N; i++)
					if (N % i == 0)
					{
						N /= i;
						prime[i]++;
						break;
					}

			for (int i = 0; i < 1400; i++)
				if (prime[i] > 0)
					count++;

			if (count % 2 == 0)
				im = true;
		}
	}

	if (yi == 1 && im == 0)
		std::cout << 1;
	else if (yi == 0 && im == 1)
		std::cout << 2;
	else if (yi == 0 && im == 0)
		std::cout << 3;
	else
		std::cout << 4;
}