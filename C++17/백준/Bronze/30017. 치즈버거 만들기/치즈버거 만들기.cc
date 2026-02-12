#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B;
    std::cin >> A >> B;
    std::cout << (A > B ? (B + 1) + B : A + (A - 1));

    return 0;
}