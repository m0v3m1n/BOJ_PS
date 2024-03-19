#include <iostream>
#include <string>

int main()
{
	std::string S;
	std::cin >> S;

	int Zero = 0;
	int One = 0;
	int Index = 0;

	while (Index != S.size())
	{
		if (S[Index] == '1')
		{
			while (S[Index + 1] == '1')
				Index++;
			One++;
		}
		else
		{
			while (S[Index + 1] == '0')
				Index++;
			Zero++;
		}

		Index++;
	}

	std::cout << (Zero < One ? Zero : One);
	return 0;

}