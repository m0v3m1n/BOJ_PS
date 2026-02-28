#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    std::cin >> S;

    if (S[0] == '5' && S[1] == '5' && S[2] == '5')
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}