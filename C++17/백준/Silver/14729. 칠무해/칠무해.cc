#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	double tmp;

	std::priority_queue<double> PQ;

	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		PQ.push(tmp * -1);
	}

	std::cout << std::fixed;
	std::cout.precision(3);

	for (int i = 0; i < 7; i++)
	{
		std::cout << PQ.top() * -1 << '\n';
		PQ.pop();
	}
}