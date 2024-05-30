#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string A, B;
	std::vector<std::string> M;
	std::cin >> A >> B;

	std::string tmp_A;
	for (int i = 0; i < A.length(); i++)
		tmp_A.push_back('.');
	for (int j = 0; j < B.length(); j++)
		M.push_back(tmp_A);

	bool break_flag = 0;
	int i_dx, j_dx;
	char matched;

	for (int i = 0; i < A.length(); i++)
	{
		for (int j = 0; j < B.length(); j++)
			if (A[i] == B[j]) // 적어도 한 글자는 포함 --> if문 써도 무방.
			{
				matched = A[i];
				i_dx = i;
				j_dx = j;

				break_flag = 1;
				break;
			}
		if (break_flag)
			break;
	}

	M[j_dx] = A;
	for (int i = 0; i < B.length(); i++)
		M[i][i_dx] = B[i];

	for (auto& K : M)
	{
		for (auto& L : K)
			std::cout << L;
		std::cout << '\n';
	}
	return 0;
}