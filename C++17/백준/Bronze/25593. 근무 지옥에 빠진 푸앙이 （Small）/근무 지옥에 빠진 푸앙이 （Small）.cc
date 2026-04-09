#include <iostream>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, min = 100000, max = -1;
	std::string S;
	std::map<std::string, int> M;

	std::cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 7; k++)
			{
				std::cin >> S;

				if (S != "-")
					if (j == 0)
						if (M.find(S) == M.end())
							M.insert({ S, 4 });
						else
							M[S] += 4;
					else if (j == 1)
						if (M.find(S) == M.end())
							M.insert({ S, 6 });
						else
							M[S] += 6;
					else if (j == 2)
						if (M.find(S) == M.end())
							M.insert({ S, 4 });
						else
							M[S] += 4;
					else
						if (M.find(S) == M.end())
							M.insert({ S, 10 });
						else
							M[S] += 10;
			}

	for (auto& K : M)
	{
		if (K.second > max)
			max = K.second;
		if (K.second < min)
			min = K.second;
	}

	if (max - min <= 12)
		std::cout << "Yes";
	else
		std::cout << "No";

	return 0;
}