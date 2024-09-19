#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string input;
	int N, count = 0;

	std::cin >> input >> N;

	for (int i = 0; i < N; i++)
	{
		std::string s, tmp;
		std::cin >> s;

		tmp = s + s;
		if (tmp.find(input) != std::string::npos) // 찾았다면?
			count++;
	}

	std::cout << count;
	return 0;
}