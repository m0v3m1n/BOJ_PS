#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

long long gcd(long long a, long long b)
{
	while (b)
	{
		long long t = a % b;
		a = b;
		b = t;
	}

	return a;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string S; std::cin >> S;

	long long pos = S.find(".");
	long long len = S.length() - pos - 1; // 0.123 --> len은 3 (S.length()가 5, pos가 1이므로 5 - 1 - 1 = 3)

	long long a = std::stoi(S.substr(pos + 1, len));
	long long b = std::pow(10, len);

	long long g = gcd(a, b);
	std::cout << "YES" << '\n' << a / g << ' ' << b / g;

	return 0;
}