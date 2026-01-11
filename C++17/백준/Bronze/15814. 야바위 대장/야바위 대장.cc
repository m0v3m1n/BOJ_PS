#include <iostream>
#include <string>

int main()
{
	std::string S;
	std::getline(std::cin, S);

	int T, A, B;
	char c;
	std::cin >> T;

	while (T--)
	{
		std::cin >> A >> B;
		c = S[A];
		S[A] = S[B];
		S[B] = c;
	}

	std::cout << S;
}