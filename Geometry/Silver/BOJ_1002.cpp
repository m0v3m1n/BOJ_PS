// 백준 번호 1002번, 터렛
// 문제 링크 : https://www.acmicpc.net/problem/1002

#include <iostream>
#include <cmath>

// 참고 자료 : https://mathbang.net/101#gsc.tab=0 , 두 원의 위치 관계.

int main()
{
	int T;
	std::cin >> T;

	int x1, y1, r1, x2, y2, r2;
	int distance_pow;

	for (int i = 0; i < T; i++)
	{
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		// 두 원이 동일하다면 무한대로 만남.
		if (x1 == x2 && y1 == y2 && r1 == r2)
			std::cout << -1;

		else
		{
			distance_pow = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

			// 한 점에서 만날 때
			if (pow(r1,2) + pow(r2,2) + ((r1 * r2) * 2) == distance_pow || pow(r2 - r1, 2) == distance_pow)
				// r1 + r2 가 거리와 같거나, 두 원의 반지름 차가 거리와 같을 때 (내접일 때)
				std::cout << 1;

			// 두 점에서 만날 때
			// 두 원의 반지름 차 < 거리 < 두 원의 반지름의 합
			else if (pow(r2 - r1, 2) < distance_pow && distance_pow < pow(r1, 2) + pow(r2, 2) + ((r1 * r2) * 2))
				std::cout << 2;

			// 그 외의 경우.
			// 1. 두 원의 반지름 차 > 거리
			// 2. 두 원의 반지름의 합 < 거리
			// => 못 만남.
			else
				std::cout << 0;
		}

		std::cout << '\n';
	}

	return 0;
}
