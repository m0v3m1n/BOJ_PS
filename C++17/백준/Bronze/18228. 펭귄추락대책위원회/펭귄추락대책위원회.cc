#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, l_min, r_min, pen;
	std::cin >> N;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
	{
		std::cin >> V[i];
		if (V[i] == -1)
			pen = i;
	}

	l_min = V[pen - 1];
	r_min = V[pen + 1];

	for (int i = pen - 1; i >= 0; i--)
		if (V[i] < l_min)
			l_min = V[i];

	for (int i = pen + 1; i < N; i++)
		if (V[i] < r_min)
			r_min = V[i];

	std::cout << l_min + r_min;
	return 0;
}