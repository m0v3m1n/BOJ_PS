#include <iostream>
#include <string>

int main()
{
	int prime_arr[1100] = { 0, };
	for (int i = 2; i < 1100; i++)
		if (prime_arr[i] == 0)
			for (int j = i + i; j < 1100; j += i)
				prime_arr[j] = 1;

	std::string S;
	std::cin >> S;

	int prime = 0;
	for (int i = 0; i < S.size(); i++)
		if (S[i] >= 'a' && S[i] <= 'z')
			prime += (S[i] - 'a') + 1;
		else
			prime += (S[i] - 'A') + 27;

	if (prime_arr[prime] == 0)
		std::cout << "It is a prime word.";
	else
		std::cout << "It is not a prime word.";

	return 0;
}