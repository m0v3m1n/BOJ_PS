#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool cmp(std::string a, std::string b)
{
	if (a.length() == b.length()) // 길이가 같다면?
	{
		int as = 0, bs = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
				as += (a[i] - '0');
			if (b[i] >= '0' && b[i] <= '9')
				bs += (b[i] - '0');
		}

		if (as == bs) // 자릿수 합까지 같다면?
			return a < b;
		else // 자릿수 합 다르다면?
			return as < bs;
	}
	else
		return a.length() < b.length(); // 짧은게 먼저.
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::vector<std::string> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	std::sort(V.begin(), V.end(), cmp);

	for (auto& K : V)
		std::cout << K << '\n';
	return 0;
}