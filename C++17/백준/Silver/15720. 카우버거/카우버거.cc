#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int B, C, D; std::cin >> B >> C >> D;
	std::vector<int> burger(B), side(C), be(D);

	for (int i = 0; i < B; i++)
		std::cin >> burger[i];
	for (int i = 0; i < C; i++)
		std::cin >> side[i];
	for (int i = 0; i < D; i++)
		std::cin >> be[i];

	std::sort(burger.begin(), burger.end(), std::greater<int>());
	std::sort(side.begin(), side.end(), std::greater<int>());
	std::sort(be.begin(), be.end(), std::greater<int>());

	int mins = 0, sum = 0;

	for (int i = 0; i < burger.size(); i++)
		sum += burger[i];
	for (int i = 0; i < side.size(); i++)
		sum += side[i];
	for (int i = 0; i < be.size(); i++)
		sum += be[i];

	std::cout << sum << '\n'; // 최초 가격 출력

	sum = 0;
	mins = std::min(std::min(B, C), D); // 가장 적은 메뉴의 수는?

	for (int i = 0; i < mins; i++) // 이후 가장 적은 메뉴의 수까지 상위 mins개 더하고
		sum += burger[i] + side[i] + be[i];

	sum *= 0.9; // 0.9 곱하기 (10퍼 할인)

	for (int i = mins; i < burger.size(); i++)
		sum += burger[i];
	for (int i = mins; i < side.size(); i++)
		sum += side[i];
	for (int i = mins; i < be.size(); i++)
		sum += be[i];

	// 이후 나머지 가격들 다 더해주고 출력.
	std::cout << sum;
}