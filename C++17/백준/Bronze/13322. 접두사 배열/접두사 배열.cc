#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    std::string S; std::cin >> S;
    for (int i = 0; i < S.length(); i++)
        std::cout << i << '\n';
}
