#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string A, B, tmp;

	while (std::getline(std::cin, A) && std::getline(std::cin, B))
	{
		tmp = "";
		std::vector<int> A_alp(26, 0), B_alp(26, 0), tmp_alp(26, 0);

		for (auto& K : A)
			A_alp[K - 'a']++;
		for (auto& K : B)
			B_alp[K - 'a']++;

		for (int i = 0; i < 26; i++)
			tmp_alp[i] = std::min(A_alp[i], B_alp[i]);

		for (int i = 0; i < 26; i++)
			for (int j = 0; j < tmp_alp[i]; j++)
				std::cout << (char)(i + 'a');

		std::cout << '\n';
	}
}