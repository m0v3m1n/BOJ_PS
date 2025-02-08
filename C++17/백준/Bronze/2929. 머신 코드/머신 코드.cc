#include <iostream>
#include <string>

int main()
{
	std::string S;
	std::cin >> S;

	int left_C = -1, right_C = -1;
	int NOP_sum = 0;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] >= 'A' && S[i] <= 'Z') // OP
		{
			if (left_C == -1) // 처음.
				left_C = i;
			else
			{
				right_C = i;

				if ((right_C - left_C) % 4 != 0) // 적절하지 않은 위치라면?
					NOP_sum += 4 * ((right_C - left_C) / 4 + 1) - (right_C - left_C);

				left_C = i;
			}
		}
	}
	
	std::cout << NOP_sum;
	return 0;
}