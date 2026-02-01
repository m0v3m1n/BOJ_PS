#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T;
    std::cin >> T;
    
    double half = (double)T / 2.0;
    std::cout << (int)(half * half + 0.5);
    return 0;
}