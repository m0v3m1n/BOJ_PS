#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, std::string> a, std::pair<int, std::string> b)
{
	return a.first > b.first;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	std::pair<int, std::string> ps[3];
	int y[3];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> ps[i].first >> y[i] >> ps[i].second;
		y[i] %= 100;
	}

	std::sort(ps, ps + 3, cmp);
	std::sort(y, y + 3);
	
	for (int i = 0; i < 3; i++)
		std::cout << y[i];
	std::cout << '\n';
	for (int i = 0; i < 3; i++)
		std::cout << ps[i].second[0];

	return 0;
}