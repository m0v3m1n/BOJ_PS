#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int sum = 0;
	std::string S = "", tmp;

	while (std::cin >> tmp)
		S += tmp;
	tmp = "";

	for (int i = 0; i <= S.size(); i++)
		if (S[i] == ',' || i == S.size())
		{
			sum += std::stoi(tmp);
			tmp = "";
		}
		else
			tmp += S[i];

	std::cout << sum;
}