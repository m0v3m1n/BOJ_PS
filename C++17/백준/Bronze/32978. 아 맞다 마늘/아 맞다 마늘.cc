#include <iostream>
#include <set>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::cin >> N;

	std::string S;
	std::set<std::string> T1, T2;

	for (int i = 0; i < N; i++)
	{
		std::cin >> S;
		T1.insert(S);
	}

	for (int i = 0; i < N - 1; i++)
	{
		std::cin >> S;
		T2.insert(S);
	}

	for (auto& K : T1)
		if (T2.find(K) == T2.end())
			std::cout << K;

	return 0;
}