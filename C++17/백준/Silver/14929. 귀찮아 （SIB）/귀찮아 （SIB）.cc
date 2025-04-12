#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long N, tmp, be_sqaured = 0, already_sqaured = 0; std::cin >> N;
    std::vector<long long> V(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        be_sqaured += tmp;
        already_sqaured += (tmp * tmp);
    }

    std::cout << ((be_sqaured * be_sqaured) - already_sqaured) / 2;
}