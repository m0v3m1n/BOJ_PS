#include <iostream>
#include <string>
#include <vector>

int main()
{
	int N; std::cin >> N;
	while (N--)
	{
		int score = 0;
		std::vector<int> V(10, 0);
		std::string A; std::cin >> A;

		for (int i = 0; i < A.size(); i++)
			V[A[i] - '0']++;

		for (int j = 0; j < 10; j++)
			if (V[j] > 0)
				score++;

		std::cout << score << '\n';
	}
}