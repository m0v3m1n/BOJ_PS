#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T;  std::cin >> T;

	while(T--)
	{
		int A, B; std::cin >> A >> B;
		std::cout << "You get " << A / B << " piece(s) and your dad gets " << A % B << " piece(s).\n";
	}
}