#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n = 1;
    std::string S; std::cin >> S;

    for (int i = 1; i < S.length(); i++)
        if (S[i] <= S[i - 1])
            n++;

    std::cout << n;
}
