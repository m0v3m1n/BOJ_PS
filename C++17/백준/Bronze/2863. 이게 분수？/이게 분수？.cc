#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	double a, b, c, d;
	std::cin >> a >> b >> c >> d;

	double first = 0, second = 0, third = 0, fourth = 0;

	first = (a / c) + (b / d);
	second = (c / d) + (a / b);
	third = (d / b) + (c / a);
	fourth = (b / a) + (d / c);

	if (first >= second && first >= third && first >= fourth)
		std::cout << 0;
	else if (second >= first && second >= third && second >= fourth)
		std::cout << 1;
	else if (third >= first && third >= second && third >= fourth)
		std::cout << 2;
	else if (fourth >= first && fourth >= second && fourth >= third)
		std::cout << 3;

	return 0;
}