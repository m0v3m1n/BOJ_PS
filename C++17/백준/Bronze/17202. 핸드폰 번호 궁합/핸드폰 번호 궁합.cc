#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string A, B, DP, DDP = ""; std::cin >> A >> B;
	for (int i = 0; i < 8; i++)
	{
		DP.push_back(A[i]);
		DP.push_back(B[i]);
	}

	while (DP.length() > 2)
	{
		for (int i = 0; i < DP.length() - 1; i++)
			if (((DP[i] - '0') + (DP[i + 1] - '0')) % 10 == 0)
				DDP.push_back('0');
			else
				DDP.push_back(((DP[i] - '0') + (DP[i + 1] - '0')) % 10 + '0');

		// std::cout << DDP << '\n';
		DP = DDP;
		DDP.clear();
	}

	std::cout << DP;
	return 0;
}