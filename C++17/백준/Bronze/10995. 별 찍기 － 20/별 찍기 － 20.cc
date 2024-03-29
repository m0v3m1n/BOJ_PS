#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	int N; std::cin >> N;
	for (int i = 0; i < N; i++)
		S += "* ";
	for (int i = 0; i < N; i++)
		if (i % 2 == 0)
			std::cout << S << '\n';
		else
			std::cout << ' ' << S << '\n';
	return 0;
}