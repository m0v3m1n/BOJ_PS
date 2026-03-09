#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B, K, X, res;
    std::cin >> A >> B >> K >> X;

    res = -(K - X > A ? K - X : A) + (K + X < B ? K + X : B) + 1;

    if (res > 0)
        std::cout << res;
    else
        std::cout << "IMPOSSIBLE";

    return 0;
}