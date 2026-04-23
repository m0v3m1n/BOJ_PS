#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, head;
	std::string S;

	std::cin >> T;
	for (int i = 1; i <= T; i++)
	{
		std::cin >> head >> S;
		for (auto& c : S)
			if (c == 'c')
				head += 1;
			else // b
				head -= 1;

		std::cout << "Data Set " << i << ":" << '\n';
		std::cout << head << "\n\n";
	}
	return 0;
}