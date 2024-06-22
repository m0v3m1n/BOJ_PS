#include <iostream>

int main()
{
	long long N; std::cin >> N;
	long long tri = 0;

	// 세 변 A,B,C;
	for(long long A = 1; A < N; A++)
		for (long long B = A; B < N; B++)
		{
			long long C = N - (A + B); // 가장 큰 변을 C라 두었을 때.

			if (B > C || A > C) // 한 변이라도 C보다 크다면? --> 삼각형 정의 컽.
				break;

			if (C < A + B)
				tri++;
		}

	std::cout << tri;
	return 0;
}