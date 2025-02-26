#include <iostream>
#include <set>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int a, b, tmp;
	std::cin >> a >> b;

	std::set<int> A;
	for (int i = 0; i < a; i++)
	{
		std::cin >> tmp;
		A.insert(tmp);
	}

	for (int i = 0; i < b; i++)
	{
		std::cin >> tmp;
		if (A.find(tmp) == A.end()) // 없다면?
			continue;
		else
			A.erase(A.find(tmp));
	}

	std::cout << A.size() << '\n';
	for (auto& K : A)
		std::cout << K << ' ';

	return 0;
}
