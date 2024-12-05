#include <iostream>

int main()
{
	int N, M, K; std::cin >> N >> M >> K;
	// M : 앞면 O 개수, K : 뒷면 O 개수
	// N - M : 앞면 X 개수, N - K : 뒷면 X 개수
	std::cout << (N - M < N - K ? N - M : N - K) + (M < K ? M : K);
}