#include <iostream>
int main()
{int T; std::cin >> T;while (T--)
{int a, b, c, sum = 0; std::cin >> a >> b >> c;
for (int i = 1; i <= a; i++)for (int j = 1; j <= b; j++)for (int k = 1; k <= c; k++)if (i % j == j % k && j % k == k % i) sum++;
std::cout << sum << '\n';
}
}