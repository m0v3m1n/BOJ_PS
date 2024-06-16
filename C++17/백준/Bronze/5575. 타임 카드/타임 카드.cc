#include <iostream>

int main()
{
	int h1, m1, s1, h2, m2, s2;
	int t1, t2, worked;
	for (int i = 0; i < 3; i++)
	{
		t1 = 0; t2 = 0; worked = 0;
		std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		
		t1 = (h1 * 3600 + m1 * 60 + s1);
		t2 = (h2 * 3600 + m2 * 60 + s2);

		worked = t2 - t1;
		std::cout << worked / 3600 << ' ' << (worked % 3600) / 60 << ' ' << (worked % 60) << '\n';
	}
}