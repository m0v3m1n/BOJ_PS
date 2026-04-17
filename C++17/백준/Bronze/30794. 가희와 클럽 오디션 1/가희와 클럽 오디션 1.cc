#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::string S;

	std::cin >> N >> S;

	if (S == "miss")
		std::cout << 0;
	else if (S == "bad")
		std::cout << N * 200;
	else if (S == "cool")
		std::cout << N * 400;
	else if (S == "great")
		std::cout << N * 600;
	else if (S == "perfect")
		std::cout << N * 1000;

	return 0;
}