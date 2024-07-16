#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, T, P;
	int Tc = 0, Ps, Pm;
	std::cin >> N;

	std::vector<int> V(6);
	for (int i = 0; i < 6; i++) // 티셔츠 수요 조사
		std::cin >> V[i];

	std::cin >> T >> P; // 묶음 조사

	for (int i = 0; i < 6; i++)
		if (V[i] % T == 0)
			Tc += V[i] / T;
		else
			Tc += (V[i] / T) + 1;
	Pm = N / P; Ps = N % P;

	std::cout << Tc << '\n' << Pm << ' ' << Ps;
	return 0;
}