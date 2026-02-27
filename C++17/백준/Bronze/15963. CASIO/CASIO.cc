#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long a, b;
    std::cin >> a >> b;
    
    if (a == b)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}