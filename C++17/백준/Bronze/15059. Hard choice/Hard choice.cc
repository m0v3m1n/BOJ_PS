#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int C1, B1, P1, C2, B2, P2;
    std::cin >> C1 >> B1 >> P1 >> C2 >> B2 >> P2;

    std::cout << (C1 > C2 ? 0 : C2 - C1) + (B1 > B2 ? 0 : B2 - B1) + (P1 > P2 ? 0 : P2 - P1);

    return 0;
}