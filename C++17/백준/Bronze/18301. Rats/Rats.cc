#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    double n1, n2, n12;
    std::cin >> n1 >> n2 >> n12;

    std::cout << std::floor((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);

    return 0;
}