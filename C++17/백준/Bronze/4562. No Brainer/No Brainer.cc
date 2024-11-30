#include <iostream>

int main()
{
	int N; std::cin >> N;
	while (N--)
	{
		int X, Y; std::cin >> X >> Y;

		if (X < Y)
			std::cout << "NO BRAINS\n";
		else
			std::cout << "MMM BRAINS\n";
	}
}