#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	while (1)
	{
		int idx = 0;
		std::string Str, newStr; std::cin >> Str;
		if (Str == "#")
			break;

		while (Str[idx] != 'a' && Str[idx] != 'e' && Str[idx] != 'i' && Str[idx] != 'o' && Str[idx] != 'u' && idx < Str.length())
			idx++;

		newStr = Str.substr(idx, Str.length() - idx) + Str.substr(0, idx);
		std::cout << newStr << "ay" << '\n';
	}
	return 0;
}