#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T = 1, a, b;
    std::string S;

    while (T)
    {
        std::cin >> a >> S >> b;

        if (S == "E")
            break;

        std::cout << "Case " << T << ": ";
        if (S == ">")
            std::cout << (a > b ? "true" : "false");
        if (S == ">=")
            std::cout << (a >= b ? "true" : "false");
        if (S == "==")
            std::cout << (a == b ? "true" : "false");
        if (S == "<")
            std::cout << (a < b ? "true" : "false");
        if (S == "<=")
            std::cout << (a <= b ? "true" : "false");
        if (S == "!=")
            std::cout << (a != b ? "true" : "false");

        std::cout << '\n';
        T++;
    }
}
