#include <iostream>
#include <algorithm>

int main()
{
	long long N;
	double L, W, H;
	std::cin >> N >> L >> H >> W;

	double left = 0.0, right = std::min(std::min(L, H), W);
	for (int i = 0; i < 100000; i++) // 이분 탐색 --> ㅈㄴ 돌리다 보면 수렴 (수치해석 기모띠)
	{
		double mid = (left + right) / 2.0;

		if ((long long)(L / mid) * (long long)(H / mid) * (long long)(W / mid) < N) // 정수형으로 변환 --> 1.2가 2.5에 들어가는 건?
			//2.xx --> 2개. 즉, 정수형으로 치환한 결과가 N보다 작으면? --> 박스 크기 줄여야 함.
			right = mid;
		else
			left = mid;
	}

	std::cout << std::fixed;
	std::cout.precision(10);
	std::cout << left; // 이때, left와 right 모두 수렴했으니 뭘 쓰든 상관 X

	return 0;
}