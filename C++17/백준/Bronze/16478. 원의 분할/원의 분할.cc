#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    double ab, bc, cd;
    std::cin >> ab >> bc >> cd;

    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << (ab * cd) / bc;

    return 0;
}