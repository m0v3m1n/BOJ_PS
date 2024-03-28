#include <iostream>
#include <queue>

std::queue<int> Q;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	int INT;
	std::string OP;

	for (int i = 0; i < N; i++)
	{
		std::cin >> OP;

		if (OP == "push")
		{
			std::cin >> INT;
			Q.push(INT);
		}
		else if (OP == "pop")
		{
			if (Q.empty())
				std::cout << -1 << '\n';
			else
			{
				std::cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (OP == "size")
		{
			std::cout << Q.size() << '\n';
		}
		else if (OP == "empty")
		{
			if (Q.empty())
				std::cout << 1 << '\n';
			else
				std::cout << 0 << '\n';
		}
		else if (OP == "front")
		{
			if (Q.empty())
				std::cout << -1 << '\n';
			else
				std::cout << Q.front() << '\n';
		}
		else if (OP == "back")
		{
			if (Q.empty())
				std::cout << -1 << '\n';
			else
				std::cout << Q.back() << '\n';
		}
	}

	return 0;
}