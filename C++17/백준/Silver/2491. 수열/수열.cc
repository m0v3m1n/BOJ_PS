#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	int inc_max = 1, inc_tmp = 1;
	int dec_max = 1, dec_tmp = 1;
	int previous;
	
	std::cin >> N;

	std::vector<int> V(N);
	for (int i = 0; i < N; i++)
		std::cin >> V[i];

	previous = V[0];

	for (int i = 1; i < N; i++)
	{
		if (V[i] > previous)
		{
			inc_tmp++;
			dec_max = (dec_tmp > dec_max ? dec_tmp : dec_max);
			dec_tmp = 1;
		}
		else if (V[i] == previous)
		{
			inc_tmp++;
			dec_tmp++;
		}
		else
		{
			dec_tmp++;
			inc_max = (inc_tmp > inc_max ? inc_tmp : inc_max);
			inc_tmp = 1;
		}

		previous = V[i];
	}

	inc_max = (inc_tmp > inc_max ? inc_tmp : inc_max);
	dec_max = (dec_tmp > dec_max ? dec_tmp : dec_max);

	std::cout << (inc_max > dec_max ? inc_max : dec_max);
	return 0;
}