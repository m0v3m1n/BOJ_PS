#include <iostream>
#include <string>

int main()
{
	int N, a = 0, b = 0;
	std::string S;

	std::cin >> N >> S;

	for (int i = 0; i < S.size(); i++)
		if (S[i] == 'A')
			a++;
		else if (S[i] == 'B')
			b++;

	if (a > b)
		std::cout << "A";
	else if (a == b)
		std::cout << "Tie";
	else
		std::cout << "B";
}