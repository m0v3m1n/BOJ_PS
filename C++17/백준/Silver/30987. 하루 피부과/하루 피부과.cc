#include <iostream>

int main()
{
	int x0, x1, a, b, c, d, e;
	std::cin >> x0 >> x1 >> a >> b >> c >> d >> e;

	// ax^2 +  bx + c = f(x), dx + e = g(x)
	// 구해야 할 값 : 정적분, x0부터 x1까지 f(x) - g(x)
	// ==> F(x1) - G(x1) - (F(x0) - G(x0))

	int F_x0 = (a / 3) * x0 * x0 * x0 + (b / 2) * x0 * x0 + c * x0;
	int G_x0 = (d / 2) * x0 * x0 + e * x0;

	int F_x1 = (a / 3) * x1 * x1 * x1 + (b / 2) * x1 * x1 + c * x1;
	int G_x1 = (d / 2) * x1 * x1 + e * x1;

	std::cout << (F_x1 - G_x1) - (F_x0 - G_x0);
	return 0;
}