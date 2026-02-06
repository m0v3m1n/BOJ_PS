#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B, C;
    std::cin >> A >> B >> C;
    
    if (A + B != C)
        std::cout << "wrong!";
    else
        std::cout << "correct!";

    return 0;
}