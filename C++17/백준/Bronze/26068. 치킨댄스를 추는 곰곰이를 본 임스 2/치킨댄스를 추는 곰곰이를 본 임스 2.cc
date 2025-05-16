#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, tmp, g = 0;
    std::cin >> N;

    std::string S;
    while (N--)
    {
        std::cin >> S;
        S.erase(S.begin(), S.begin() + 2);

        tmp = std::stoi(S);

        if (tmp <= 90)
            g++;
    }
    std::cout << g;
}
