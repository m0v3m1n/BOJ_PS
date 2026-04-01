#include <iostream>

long long fact(long long N)
{
	long long ans = 1;

	for (long long i = 1; i <= N; i++)
		ans *= i;

	return ans;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long n, a, b, c, A, B, C;
	std::cin >> n >> a >> b >> c;
	
	// n개의 주차장, a, b, c개의 차들...
	// --> nCa * n-aCb * n-a-bCc ??
	A = fact(n) / (fact(a) * fact(n - a));
	B = fact(n - a) / (fact(b) * fact(n - a - b));
	C = 1; // A, B 넣고 남은 칸에 C 넣으면 됨 --> 생각 안해도 됨.

	std::cout << A * B;
	return 0;
}