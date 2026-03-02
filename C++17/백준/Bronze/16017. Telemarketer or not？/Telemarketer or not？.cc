#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    if ((A == 8 || A == 9) && (B == C) && (D == 8 || D == 9))
        std::cout << "ignore";
    else
        std::cout << "answer";
        
    return 0;
}