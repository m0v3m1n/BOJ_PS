#include <iostream>
int main()
{
	int N, W, H, L; std::cin >> N >> W >> H >> L;

	W /= L; H /= L;
	if (W * H > N)
		std::cout << N;
	else
		std::cout << H * W;
}