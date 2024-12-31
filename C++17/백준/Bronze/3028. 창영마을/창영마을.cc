#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S;
	bool ball[3] = { true, false, false };

	std::cin >> S;
	for (int i = 0; i < S.size(); i++)
	{
		if (S[i] == 'A')
		{
			bool tmp = ball[0];
			ball[0] = ball[1];
			ball[1] = tmp;
		}
		else if (S[i] == 'B')
		{
			bool tmp = ball[1];
			ball[1] = ball[2];
			ball[2] = tmp;
		}
		else if (S[i] == 'C')
		{
			bool tmp = ball[2];
			ball[2] = ball[0];
			ball[0] = tmp;
		}
	}

	for (int i = 0; i < 3; i++)
		if (ball[i] == true)
			std::cout << i + 1;
}