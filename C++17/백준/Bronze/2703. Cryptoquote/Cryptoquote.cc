#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T; std::cin >> T;

	while (T--)
	{
		std::cin.ignore();
		std::string A, B;

		std::getline(std::cin, A); std::cin >> B;
		char arr[26] = { 0, };

		for (int i = 0; i < 26; i++)
			arr[i] = B[i];

		for (int i = 0; i < A.length(); i++)
			if (A[i] == ' ')
				std::cout << ' ';
			else
				std::cout << arr[A[i] - 'A'];

		std::cout << '\n';
	}
}