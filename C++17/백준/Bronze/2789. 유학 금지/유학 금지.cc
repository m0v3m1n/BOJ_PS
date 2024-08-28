#include <iostream>
#include <string>
int main()
{
	std::string S; std::cin >> S;
	for (auto& K : S)
		if (K == 'C' || K == 'A' || K == 'M' || K == 'B' || K == 'R' || K == 'I' || K == 'D' || K == 'G' || K == 'E')
			continue;
		else
			std::cout << K;
}