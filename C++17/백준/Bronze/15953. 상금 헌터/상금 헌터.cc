#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::vector<int> f;
	f.push_back(0);
	for (int i = 0; i < 1; i++)
		f.push_back(500);
	for (int i = 0; i < 2; i++)
		f.push_back(300);
	for (int i = 0; i < 3; i++)
		f.push_back(200);
	for (int i = 0; i < 4; i++)
		f.push_back(50);
	for (int i = 0; i < 5; i++)
		f.push_back(30);
	for (int i = 0; i < 6; i++)
		f.push_back(10);
	for (int i = 0; i < 79; i++)
		f.push_back(0);

	std::vector<int> s;
	s.push_back(0);
	for (int i = 0; i < 1; i++)
		s.push_back(512);
	for (int i = 0; i < 2; i++)
		s.push_back(256);
	for (int i = 0; i < 4; i++)
		s.push_back(128);
	for (int i = 0; i < 8; i++)
		s.push_back(64);
	for (int i = 0; i < 16; i++)
		s.push_back(32);
	for (int i = 0; i < 33; i++)
		s.push_back(0);

	int N; std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int F, S; std::cin >> F >> S;
		std::cout << f[F] * 10000 + s[S] * 10000 << '\n';
	}

	return 0;
}