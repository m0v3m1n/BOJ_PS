#include <iostream>
#include <algorithm>

int main()
{
    long long n, m; std::cin >> n >> m;

    long long n_2 = 0, n_5 = 0;
    long long nm_2 = 0, nm_5 = 0;
    long long m_2 = 0, m_5 = 0;

    for (long long i = 2; i <= n; i *= 2)
        n_2 += n / i;
    for (long long i = 2; i <= m; i *= 2)
        m_2 += m / i;
    for (long long i = 2; i <= (n - m); i *= 2)
        nm_2 += (n - m) / i;

    for (long long i = 5; i <= n; i *= 5)
        n_5 += n / i;
    for (long long i = 5; i <= m; i *= 5)
        m_5 += m / i;
    for (long long i = 5; i <= (n - m); i *= 5)
        nm_5 += (n - m) / i;

    long long A = (n_2 - nm_2) - m_2, B = (n_5 - nm_5) - m_5;
    std::cout << std::min(A, B);

    return 0;
}