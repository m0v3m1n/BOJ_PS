#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T;
	std::cin >> T;

	while (T--)
	{
		int D, N, S, P;
		std::cin >> D >> N >> S >> P;

		// D는 개발 시간
		// N은 실행 횟수
		// S, P는 각각 직렬, 병렬 시간
		// D + (N * P) > N * S

		S = N * S;
		P = D + (N * P);

		if (S > P)
			std::cout << "parallelize" << '\n';
		else if (S == P)
			std::cout << "does not matter" << '\n';
		else
			std::cout << "do not parallelize" << '\n';
	}

	return 0;
}