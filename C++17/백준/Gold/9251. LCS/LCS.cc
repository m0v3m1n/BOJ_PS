#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	int s1_size, s2_size, max = 0;
	std::string s1, s2;

	std::cin >> s1 >> s2;
	s1_size = s1.size(); s2_size = s2.size();

	int** lcs = new int* [s1_size + 1];
	for (int i = 0; i < s1_size + 1; i++)
		lcs[i] = new int[s2_size + 1];

	for (int i = 0; i < s1_size + 1; i++)
	{
		for (int j = 0; j < s2_size + 1; j++)
		{
			if (!i || !j)
				lcs[i][j] = 0;
			else
			{
				if (s1[i - 1] == s2[j - 1])
					lcs[i][j] = lcs[i - 1][j - 1] + 1;
				else
					lcs[i][j] = (lcs[i][j - 1] > lcs[i - 1][j]) ? lcs[i][j - 1] : lcs[i - 1][j];
			}

			if (lcs[i][j] > max)
				max = lcs[i][j];
		}
	}

	//for (int i = 0; i < s1_size + 1; i++)
	//{
	//	for (int j = 0; j < s2_size + 1; j++)
	//		std::cout << lcs[i][j] << ' ';
	//	std::cout << '\n';
	//}

	std::cout << max;

	for (int i = 0; i < s1_size + 1; i++)
		delete[] lcs[i];
	delete[] lcs;
	
}