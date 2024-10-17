#include <iostream>
#include <deque>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, tmp;
	std::deque<int> D;

	std::cin >> T;
	while (T--)
	{
		std::cin >> N;
		switch (N)
		{
		case 1:
			std::cin >> tmp;
			D.push_front(tmp);
			break;

		case 2:
			std::cin >> tmp;
			D.push_back(tmp);
			break;

		case 3:
			if (D.empty())
				std::cout << -1 << '\n';
			else
			{
				std::cout << D.front() << '\n';
				D.pop_front();
			}
			break;

		case 4 :
			if (D.empty())
				std::cout << -1 << '\n';
			else
			{
				std::cout << D.back() << '\n';
				D.pop_back();
			}
			break;

		case 5 :
			std::cout << D.size() << '\n';
			break;

		case 6 :
			if (D.empty())
				std::cout << 1 << '\n';
			else
				std::cout << 0 << '\n';
			break;

		case 7 :
			if (D.empty())
				std::cout << -1 << '\n';
			else
				std::cout << D.front() << '\n';
			break;

		case 8 :
			if (D.empty())
				std::cout << -1 << '\n';
			else
				std::cout << D.back() << '\n';
			break;
		}
	}
}