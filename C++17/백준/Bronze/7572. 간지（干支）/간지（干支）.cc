#include <iostream>

int main()
{
	int N; std::cin >> N;
	// 1년 : 신유년 --> 자~해 중 10번째, 갑~계 중 8번째,
	std::cout << char((N + 8) % 12 + 'A') << (N + 6) % 10;
}