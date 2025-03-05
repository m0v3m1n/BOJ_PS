#include <iostream>

int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string a, b; std::cin >> a >> b;

	bool flag = a.length() < b.length() ? true : false;
	int len = gcd(a.length(), b.length());
	int total_len = (a.length() * b.length()) / len;

	std::string tmp_a = a;
	std::string tmp_b = b;

	while (a.length() < total_len)
		a += tmp_a;
	while (b.length() < total_len)
		b += tmp_b;

	if (a == b)
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}