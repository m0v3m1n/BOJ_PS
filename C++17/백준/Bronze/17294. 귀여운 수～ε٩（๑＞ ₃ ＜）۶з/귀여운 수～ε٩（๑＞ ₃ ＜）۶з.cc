#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	std::string S; std::cin >> S;
	bool flag = true;

	if (S.length() == 1)
		std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
	else
	{
		int cd = (S[1] - '0') - (S[0] - '0');
		
		for(int i = 1; i < S.size(); i++)
			if ((S[i - 1] - '0') + cd != (S[i] - '0'))
			{
				flag = false;
				break;
			}

		if (flag)
			std::cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
		else
			std::cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
	}
}