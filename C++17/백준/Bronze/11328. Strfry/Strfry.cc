#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T;
	std::cin >> T;

	while (T--)
	{
		std::string A, B;
		bool flag = true;

		int A_alp[26] = { 0, };
		int B_alp[26] = { 0, };

		std::cin >> A >> B;

		for (int i = 0; i < A.size(); i++)
			A_alp[A[i] - 'a']++;

		for (int i = 0; i < B.size(); i++)
			B_alp[B[i] - 'a']++;

		for (int i = 0; i < 26; i++)
			if (A_alp[i] != B_alp[i])
				flag = false;

		if (flag)
			std::cout << "Possible" << '\n';
		else
			std::cout << "Impossible" << '\n';
	}
}