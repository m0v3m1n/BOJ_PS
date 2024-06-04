#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, M, dist = 0;
	std::string S;

	std::cin >> N >> M;
	std::vector<std::string> SV(N);
	for (int i = 0; i < N; i++)
		std::cin >> SV[i];

	for (int i = 0; i < M; i++)
	{
		int ACGT[4] = { 0, };

		for (int j = 0; j < N; j++)
			if (SV[j][i] == 'A')
				ACGT[0]++;
			else if (SV[j][i] == 'C')
				ACGT[1]++;
			else if (SV[j][i] == 'G')
				ACGT[2]++;
			else
				ACGT[3]++;

		// 사전 순으로 앞서려면? --> A의 idx가 가장 마지막에 갱신 --> 비교를 뒤에샤부터?
		int max_idx = 0;
		for (int k = 0; k < 4; k++)
			if (ACGT[k] > ACGT[max_idx])
				max_idx = k;

		if (max_idx == 0)
			S.push_back('A');
		else if (max_idx == 1)
			S.push_back('C');
		else if (max_idx == 2)
			S.push_back('G');
		else
			S.push_back('T');
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (S[j] != SV[i][j])
				dist++;

	std::cout << S << '\n' << dist;
	return 0;
}