#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<long long>> matMultiply(std::vector<std::vector<long long>>& mat1, std::vector<std::vector<long long>>& mat2)
{
	long long N = mat1.size();
	std::vector<std::vector<long long>> resMat(N, std::vector<long long>(N, 0));

	for (long long i = 0; i < N; i++)
		for (long long j = 0; j < N; j++)
		{
			for (long long k = 0; k < N; k++)
				resMat[i][j] = (resMat[i][j] + (mat1[i][k] % 1000) * (mat2[k][j] % 1000)) % 1000;
		}

	return resMat;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long N, B;
	std::cin >> N >> B;

	std::vector<bool> square;
	std::vector<std::vector<long long>> mat(N, std::vector<long long>(N));

	for (auto& K : mat)
		for (auto& L : K)
			std::cin >> L;

	std::vector<std::vector<long long>> result(N, std::vector<long long>(N, 0)); // 추후 곱셈을 위해, 단위행렬로 설정 --> 처음 곱한 행렬 그대로 나오게.
	for (int i = 0; i < N; i++)
		result[i][i] = 1;

	while (B)
	{
		if (B % 2) // 2로 나누어떨어지지 않는다면? --> 이진수 기준 1
			square.push_back(true);
		else // 나누어떨어진다면?  --> 이진수 기준 0
			square.push_back(false);

		B /= 2;
	}

	std::vector<std::vector<std::vector<long long>>> memory(square.size()); // 1제곱, 2제곱, 4제곱, ..., 기억용
	
	memory[0] = mat;
	for (long long i = 1; i < memory.size(); i++)
		memory[i] = matMultiply(memory[i - 1], memory[i - 1]);

	for (long long i = 0; i < square.size(); i++)
		if (square[i])
			result = matMultiply(result, memory[i]);

	for (auto& K : result)
	{
		for (auto& L : K)
			std::cout << L << ' ';
		std::cout << '\n';
	}

	return 0;
}