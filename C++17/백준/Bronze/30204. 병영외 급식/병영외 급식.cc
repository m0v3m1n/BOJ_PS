#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    long long N, X, sum = 0;
    std::cin >> N >> X;

    std::vector<long long> V(N);
    for (auto& K : V)
    {
        std::cin >> K;
        K %= X;
        sum += K;
    }

    if (!(sum % X)) // 나누어떨어진 게 0이라면
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}