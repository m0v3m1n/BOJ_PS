#include <iostream>
#include <vector>

int main()
{
	std::vector<int> V(21);
	int l, r;

	for (int i = 0; i < 21; i++)
		V[i] = i;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> l >> r;
		std::vector<int> tmp; // 1, 3이면 길이 3.

		for (int j = r; j >= l; j--) // 3부터 1까지
			tmp.push_back(V[j]); // 거꾸로 들어감. 이때 index는 0, 1, 2에 값이 3, 2, 1

		for (int j = 0; j < tmp.size(); j++) // 1부터 3까지
			V[j + l] = tmp[j];
	}

	for (int i = 1; i <= 20; i++)
		std::cout << V[i] << ' ';

	return 0;
}