#include <iostream>
#include <string>

int main()
{
	int N, L; std::cin >> N >> L;
	int l = 0;

	for (int i = 0; i < N; i++)
	{
		l++;

		while (1)
		{
			if (std::to_string(l).find(L + '0') != std::string::npos) // L 있으면 계속 더해주기
				l++;
			else
				break;
		}
	}

	std::cout << l;
}