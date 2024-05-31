#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string S, P = ""; std::cin >> S;
	int alphabet[26] = { 0, };
	int odd_count = 0;

	for (int i = 0; i < S.length(); i++)
		alphabet[S[i] - 'A']++;

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] % 2 == 1)
			odd_count++;
	}

	if(odd_count > 1) // 홀수개 인게 두개 이상이면?
		std::cout << "I'm Sorry Hansoo";
	else if (S.length() % 2 == 0 && odd_count > 0) // 짝수개 문자 있는데 홀수개인 알파벳 있으면?
		std::cout << "I'm Sorry Hansoo";
	else
	{
		for (int i = 0; i < 26; i++)
			for (int j = 0; j < alphabet[i] / 2; j++)
				P.push_back(i + 'A');

		for (int i = 0; i < 26; i++)
			if (alphabet[i] % 2 == 1)
				P.push_back(i + 'A');

		for (int i = 25; i >= 0; i--)
			for (int j = 0; j < alphabet[i] / 2; j++)
				P.push_back(i + 'A');

		std::cout << P;
	}
	return 0;
}