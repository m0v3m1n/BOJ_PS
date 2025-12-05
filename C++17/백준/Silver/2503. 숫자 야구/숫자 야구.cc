#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N;
	std::cin >> N;

	std::vector<int> candidate;
	std::vector<std::vector<int>> NSB(N, std::vector<int>(3));
	for (int i = 0; i < N; i++)
		std::cin >> NSB[i][0] >> NSB[i][1] >> NSB[i][2];

	for (int A = 1; A <= 9; A++)
		for (int B = 1; B <= 9; B++)
			for (int C = 1; C <= 9; C++)
			{
				bool flag = true;

				if (A == B || B == C || A == C)
					continue;
				else
				{
					for (int i = 0; i < N; i++)
					{
						int tmpS = 0, tmpB = 0;

						int n3 = NSB[i][0] / 100;
						int n2 = (NSB[i][0] % 100) / 10;
						int n1 = NSB[i][0] % 10;

						if (A == n3)
							tmpS++;
						if (B == n2)
							tmpS++;
						if (C == n1)
							tmpS++;

						if (A != n3 && (A == n2 || A == n1))
							tmpB++;
						if (B != n2 && (B == n3 || B == n1))
							tmpB++;
						if( C != n1 && (C == n3 || C == n2))
							tmpB++;

						if (tmpS != NSB[i][1] || tmpB != NSB[i][2])
						{
							flag = false;
							break;
						}
					}

					if (flag)
						candidate.push_back(A * 100 + B * 10 + C);
				}
			}

	std::cout << candidate.size();
	return 0;
}