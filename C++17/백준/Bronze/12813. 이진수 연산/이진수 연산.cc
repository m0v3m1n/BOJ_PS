#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string A, B; std::cin >> A >> B;
	for (int i = 0; i < A.length(); i++) // &
	{
		if (A[i] == B[i] && A[i] == '1')
			std::cout << 1;
		else
			std::cout << 0;
	} std::cout << '\n';


	for (int i = 0; i < A.length(); i++) // |
	{
		if (A[i] == '1' || B[i] == '1')
			std::cout << 1;
		else
			std::cout << 0;
	} std::cout << '\n';

	for (int i = 0; i < A.length(); i++) // ^
	{
		if ((A[i] == '1' && B[i] == '0') || (A[i] == '0' && B[i] == '1'))
			std::cout << 1;
		else
			std::cout << 0;
	} std::cout << '\n';

	for (int i = 0; i < A.length(); i++) // ~A
	{
		if (A[i] == '1')
			std::cout << 0;
		else
			std::cout << 1;
	} std::cout << '\n';

	for (int i = 0; i < B.length(); i++) // ~B
	{
		if (B[i] == '1')
			std::cout << 0;
		else
			std::cout << 1;
	} std::cout << '\n';

	return 0;
}