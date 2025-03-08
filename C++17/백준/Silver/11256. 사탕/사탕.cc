#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		int J, N, width, height, b = 0;
		std::cin >> J >> N;

		std::vector<int> box(N);
		for (int i = 0; i < N; i++)
		{
			std::cin >> width >> height;
			box[i] = width * height;
		}

		std::sort(box.begin(), box.end(), std::greater<int>());

		for (auto& K : box)
			if (J <= 0)
				break;
			else
			{
				J -= K;
				b++;
			}

		std::cout << b << '\n';
	}

	return 0;
}