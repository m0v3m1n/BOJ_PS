#include <iostream>
#include <vector>

int main()
{
	int N, M, tmp; std::cin >> N >> M;
	std::vector<int> fv, sv;

	for (int i = 0; i < N; i++)
	{
		std::cin >> tmp;
		fv.insert(fv.begin() + (tmp - 1), i);
	}

	for (int i = 0; i < M; i++)
	{
		std::cin >> tmp;
		sv.insert(sv.begin() + (tmp - 1), fv[M - 1 - i]);
	}

	for (int i = 0; i < 3; i++)
		std::cout << sv[i] + 1 << '\n';

	return 0;
}