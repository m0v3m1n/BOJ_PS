#include <iostream>

int main()
{
	char C;
	int N, K, S, idx = 0;
	bool usedAlp[26] = { false, };

	std::cin >> N >> K;
	char* str = new char[N + 1];

	for (int i = 0; i < N; i++)
		str[i] = '?';
	str[N] = '\0';

	for (int i = 0; i < K; i++)
	{
		std::cin >> S >> C;
		idx = (idx + S) % N;

		if (str[idx] == '?')
		{
			if (usedAlp[C - 'A'])
			{
				std::cout << "!";
				delete[] str;
				return 0;
			}

			str[idx] = C;
			usedAlp[C - 'A'] = true;
		}
		else if (str[idx] == C)
			continue;
		else // 다른 문자가 와있는 경우는 컽!!!
		{
			std::cout << "!";
			delete[] str;
			return 0;
		}
	}

	for (int i = idx; i >= 0; i--)
		std::cout << str[i];
	for (int i = N - 1; i > idx; i--)
		std::cout << str[i];
	delete[] str;

	return 0;
}