#include <iostream>
#include <string>

int main()
{
	int left_sum = 0, right_sum = 0;
	std::string S;

	std::cin >> S;
	for (int i = 0; i < S.size() / 2; i++)
		left_sum += S[i] - '0';
	for (int i = S.size() / 2; i < S.size(); i++)
		right_sum += S[i] - '0';

	if (left_sum == right_sum)
		std::cout << "LUCKY";
	else
		std::cout << "READY";
}