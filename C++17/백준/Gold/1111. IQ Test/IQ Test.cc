#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	// 1) N == 1 이면?
	// 2) N == 2 이면?
	// 3) N >= 3 이면?

	std::vector<int> V;
	int N, tmp; std::cin >> N;
	int a, b;

	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		V.push_back(tmp);
	}

	if (N == 1) // 하나만 주어지면 다음건 뭐든지 될 수 있음
		std::cout << "A";
	else if (N == 2) // 두 개 주어진다면?
	{
		// 둘이 같다면 다음건 같음.
		if (V[0] == V[1])
			std::cout << V[0];
		// 둘이 다르다면? 다음건 뭐든 될 수 있다...
		else
			std::cout << "A";
	}
	else // N이 3개라면... 여기서부터 진짜 싸움임
	{
		// 수열의 첫번째, 두번째 수 사용해서 An+1 = An * a + b를 알아봅시다
		if (V[1] - V[0] == 0) // DivideByZero 및 a == 0 을 생각해보자 (첫번째와 두번째 수 동일하면 a == 0)
			a = 0;
		else
			a = (V[2] - V[1]) / (V[1] - V[0]);

		b = V[1] - (V[0] * a); // 만약 첫번째와 두번째 수가 동일해서 a == 0이면, b == V[1]이니 다음 수 V[2]도 V[1]이 되서 상관 X

		for (int i = 0; i < N - 1; i++)
		{
			if ((V[i] * a) + b != V[i + 1])
			{
				std::cout << "B";
				return 0;
			}
		}

		std::cout << b + V[N - 1] * a;
	}

	return 0;
}