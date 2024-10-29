#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int a = 0, b = 0;
	std::vector<int> A(10), B(10);

	for (int i = 0; i < 10; i++)
		std::cin >> A[i];
	for (int i = 0; i < 10; i++)
		std::cin >> B[i];

	for (int i = 0; i < 10; i++)
		if (A[i] > B[i])
			a++;
		else if (A[i] < B[i])
			b++;

	if (a == b)
		std::cout << "D";
	else
		std::cout << (a > b ? "A" : "B");
}