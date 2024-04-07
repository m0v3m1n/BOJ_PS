#include <iostream>
#include <stack>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n, temp, max, cnt = 0; std::cin >> n;
	std::stack<int> S;

	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		S.push(temp);
	}
	max = S.top();

	for (int j = 0; j < n; j++)
	{
		if (max < S.top())
		{
			max = S.top();
			S.pop();
			cnt++;
		}
		else
			S.pop();
	}

	std::cout << cnt + 1;

	return 0;
}