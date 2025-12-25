#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, L, H;
	double sum = 0;
	std::cin >> N >> L >> H;

	std::vector<double> scores(N);
	for (auto& K : scores)
		std::cin >> K;
	std::sort(scores.begin(), scores.end());

	for (int i = L; i < N - H; i++)
		sum += scores[i];

	std::cout << std::fixed;
	std::cout.precision(10);
	std::cout << sum / (double)(N - L - H);

	return 0;
}