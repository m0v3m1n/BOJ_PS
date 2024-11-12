#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long sum = 0;
	std::string S; std::cin >> S;

	for (int i = 0; i < S.size(); i++)
		sum += (S[i] - '0') * (S[i] - '0') * (S[i] - '0') * (S[i] - '0') * (S[i] - '0');

	std::cout << sum;
}