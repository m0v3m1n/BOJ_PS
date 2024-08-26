#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int T; std::cin >> T;

	while (T--)
	{
		std::string a, b, long_str, result = "";

		std::cin >> a >> b;
		std::reverse(a.begin(), a.end());
		std::reverse(b.begin(), b.end());

		int max_size = a.size() > b.size() ? a.size() : b.size();
		int min_size = a.size() < b.size() ? a.size() : b.size(); // 짧은 쪽이 min_size

		long_str = a.size() > b.size() ? a : b;
		bool up = false;

		for (int i = 0; i < min_size; i++)
		{
			if (!up)
			{
				if (a[i] == '1' && b[i] == '1') // 올림 없는데 둘 다 1이면?
				{
					result += '0';
					up = true;
				}
				else if (a[i] == '0' && b[i] == '0') // 올림 없는데 둘 다 0이면?
					result += '0';
				else // 올림 없는 데 둘 중 하나가 1이면?
					result += '1';
			}
			else
			{
				if (a[i] == '1' && b[i] == '1') // 올림 있는데 둘 다 1이면?
					result += '1';
				else if (a[i] == '0' && b[i] == '0') // 올림 있는데 둘 다 0이면?
				{
					result += '1';
					up = false;
				}
				else // 올림 있는데 둘 중 하나가 1이면?
					result += '0';
			}
		}

		for (int i = min_size; i < max_size; i++)
		{
			if (!up)
				if (long_str[i] == '1')
					result += '1';
				else
					result += '0';
			else
				if (long_str[i] == '1')
					result += '0';
				else
				{
					result += '1';
					up = false;
				}
		}

		if (up)
			result += '1';

		while (result[result.size() - 1] == '0')
			if (result.size() == 1)
				break;
			else
			result.pop_back();

		std::reverse(result.begin(), result.end());
		std::cout << result << '\n';
	}
}