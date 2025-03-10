#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, count = 0;
	std::string s, ss;
	
	std::cin >> N;
	while (N)
	{
		if(N % 2 == 0)
			s.push_back('0');
		else
			s.push_back('1');

		N /= 2;
	}
	
	for (int i = s.length(); i < 32; i++)
		s.push_back('0');

	for (int i = 0; i < s.length(); i++)
		if (s[i] == '0')
			ss.push_back('1');
		else
			ss.push_back('0');

	for (int i = 0; i < 32; i++)
		if (ss[i] == '1')
			ss[i] = '0';
		else
		{
			ss[i] = '1';
			break;
		}

	for (int i = 0; i < 32; i++)
		if (s[i] != ss[i])
			count++;

	std::cout << count;
	return 0;
}