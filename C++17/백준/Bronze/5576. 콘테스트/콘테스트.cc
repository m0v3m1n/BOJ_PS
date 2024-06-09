#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::vector<int> W(10), K(10);

	for (int i = 0; i < 10; i++)
		std::cin >> W[i];
	for (int i = 0; i < 10; i++)
		std::cin >> K[i];

	std::sort(W.begin(), W.end());
	std::sort(K.begin(), K.end());

	std::cout << W[9] + W[8] + W[7] << ' ' << K[9] + K[8] + K[7];

	return 0;
}