#include <iostream>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, a, b;
	std::stack<int> S;

	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> a; if (a == 1) std::cin >> b;

		if (a == 1)
			S.push(b);
		else if (a == 2)
			if (S.size() == 0)
				std::cout << -1 << '\n';
			else
			{
				std::cout << S.top() << '\n';
				S.pop();
			}
		else if (a == 3)
			std::cout << S.size() << '\n';
		else if (a == 4)
			if (S.empty())
				std::cout << 1 << '\n';
			else
				std::cout << 0 << '\n';
		else if (a == 5)
			if (S.empty())
				std::cout << -1 << '\n';
			else
				std::cout << S.top() << '\n';
	}

	return 0;
}