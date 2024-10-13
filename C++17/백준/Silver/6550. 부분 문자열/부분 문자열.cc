#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	std::string S, T;
	
	while (std::cin >> S >> T)
	{
		bool flag = true;
		int idx = 0;
		auto T_iter = T.begin();

		while (idx < S.length())
		{
			auto T_find = std::find(T_iter, T.end(), S[idx]); // 탐색.

			if (T_find == T.end()) // 못 찾았으면?
			{
				flag = false;
				break;
			}
			else // 찾았으면?
			{
				T_iter = T_find + 1; // 찾은 위치의 다음 글자부터 탐색 시작.
				idx++; // 다음 글자로 넘어가기.
			}
		}

		if (flag)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}

	return 0;
}