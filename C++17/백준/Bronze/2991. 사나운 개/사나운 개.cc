#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int dog_activate[1000] = { 0, };
	int A, B, C, D; std::cin >> A >> B >> C >> D;
	int postman, milkman, paperman; std::cin >> postman >> milkman >> paperman;
	
	for (int i = 0; i < 999; i++)
	{
		if (i % (A + B) < A)
			dog_activate[i + 1]++;
		if (i % (C + D) < C)
			dog_activate[i + 1]++;
	}

	std::cout << dog_activate[postman] << '\n';
	std::cout << dog_activate[milkman] << '\n';
	std::cout << dog_activate[paperman] << '\n';
}