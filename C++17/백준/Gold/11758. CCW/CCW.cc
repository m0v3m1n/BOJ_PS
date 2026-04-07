#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int x1, y1, x2, y2, x3, y3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// p1 --> p2 --> p3에서의 뱡향성은?
	// = 선분(p1, p2)와 선분(p1, p3)을 바탕으로 행렬식의 값으로 판단하면 됨.
	/*
	    X         Y      Z 
	(x2 - x1) (y2 - y1)  0
	(x3 - x1) (y3 - y1)  0
	*/

	int CCW = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

	if (CCW < 0)
		std::cout << -1;
	else if (CCW == 0)
		std::cout << 0;
	else
		std::cout << 1;

	return 0;
}