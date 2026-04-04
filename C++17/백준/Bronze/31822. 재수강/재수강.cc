#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, cnt = 0;
	std::string S, tmp;
	
	std::cin >> S >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		if (S.substr(0, 5) == tmp.substr(0, 5))
			cnt++;
	}

	std::cout << cnt;
	return 0;
}