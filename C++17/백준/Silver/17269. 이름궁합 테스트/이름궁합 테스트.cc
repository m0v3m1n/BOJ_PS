#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	int N, M, P;
	int alp[26] = { 3,2,1,2, 4,3,1,3, 1,1,3,1, 3,2,1,2, 2,2,1,2, 1,1,1,2, 2,1 };
	std::string A, B, F, tmp;

	std::cin >> N >> M >> A >> B;
	
	for (int i = 0; i < (std::max(A.length(), B.length())); i++)
	{
		if (i < A.length())
			F.push_back(A[i]);

		if (i < B.length())
			F.push_back(B[i]);
	}

	for (auto& K : F)
		K = alp[K - 'A'] + '0';

	while (F.length() > 2)
	{
		tmp = "";

		for (int i = 0; i < F.length() - 1; i++)
			tmp.push_back(
				(((F[i] - '0') + (F[i + 1] - '0')) % 10) + '0'
			);

		F = tmp;
	}

	P = std::stoi(F);
	std::cout << P << '%';

	return 0;
}