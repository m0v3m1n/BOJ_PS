#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool l_r = true;
	int N;
	std::string S;

	std::cin >> N >> S;
	std::vector<std::string> V(N);

	for (int l = 0; l < S.size(); l += N) // 0 ~ 11
	{
		if (l_r)
			for (int i = 0; i < N; i++) // 0 ~ 2
				V[i].push_back(S[l + i]);
		else
			for (int i = 0; i < N; i++) // 2 ~ 0
				V[i].push_back(S[l + (N - i - 1)]);

		l_r = !l_r;
	}

	for (auto& K : V)
		std::cout << K;
}