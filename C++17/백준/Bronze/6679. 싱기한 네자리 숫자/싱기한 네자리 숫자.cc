#include <iostream>
#include <vector>

int main()
{
	for (int i = 1000; i < 10000; i++)
	{
		int t = i, tw = i, s = i;
		std::vector<int> ten, twelve, sixteen;

		// 10진수
		while (t)
		{
			ten.push_back(t % 10);
			t /= 10;
		}
		// 12진수
		while (tw)
		{
			twelve.push_back(tw % 12);
			tw /= 12;
		}
		// 16진수
		while (s)
		{
			sixteen.push_back(s % 16);
			s /= 16;
		}

		// 현재 while문 끝난 t, tw, s는 0.
		for (auto& K : ten)
			t += K;

		for (auto& K : twelve)
			tw += K;

		for (auto& K : sixteen)
			s += K;

		if (t == tw && tw == s)
			std::cout << i << '\n';
	}
}