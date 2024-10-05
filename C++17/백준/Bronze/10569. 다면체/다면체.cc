#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, V, E;
	std::cin >> T;

	while (T--)
	{
		std::cin >> V >> E;
		std::cout << (E - V + 2) << '\n';
	}
	return 0;
}