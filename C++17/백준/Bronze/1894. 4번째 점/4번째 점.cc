#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	double ax, ay, bx, by, cx, cy, dx, dy;
	while (std::cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy)
	{
		ax += 10000; ay += 10000; bx += 10000; by += 10000;
		cx += 10000; cy += 10000; dx += 10000; dy += 10000;

		std::cout << std::fixed;
		std::cout.precision(3);

		if (ax == cx && ay == cy) // 1, 3번점이 공통된 점일 때 :
			std::cout << dx - (ax - bx) - 10000 << ' ' << dy - (ay - by) - 10000;
		else if (ax == dx && ay == dy) // 1, 4번 점
			std::cout << cx - (ax - bx) - 10000 << ' ' << cy - (ay - by) - 10000;
		else if (bx == cx && by == cy) // 2, 3번 점
			std::cout << dx - (bx - ax) - 10000 << ' ' << dy - (by - ay) - 10000;
		else if (bx == dx && by == dy) // 2, 4번 점
			std::cout << cx - (bx - ax) - 10000 << ' ' << cy - (by - ay) - 10000;

		std::cout << '\n';
	}
}
