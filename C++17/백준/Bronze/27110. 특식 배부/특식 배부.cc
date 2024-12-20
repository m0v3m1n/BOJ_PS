#include <iostream>

int main()
{
	int N, A, B, C, sum = 0; std::cin >> N >> A >> B >> C;

	if (N <= A)
		sum += N;
	else
		sum += A;

	if (N <= B)
		sum += N;
	else
		sum += B;

	if (N <= C)
		sum += N;
	else
		sum += C;

	std::cout << sum;
}