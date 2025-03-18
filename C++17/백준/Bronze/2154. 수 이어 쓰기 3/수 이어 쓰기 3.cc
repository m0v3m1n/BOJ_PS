#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::string S = "", tmp;
	
	std::cin >> N;
	for (int i = 1; i <= N; i++)
	{
		tmp = std::to_string(i);
		S += tmp;
	}

	tmp = std::to_string(N);
	std::cout << S.find(tmp) + 1 << '\n';

	return 0;
}