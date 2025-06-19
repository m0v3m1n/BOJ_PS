#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S, mid; std::cin >> S;

    for (int i = 1; i <= S.length(); i++)
        if (i % 3)
            std::cout << "..#.";
        else
            std::cout << "..*.";
    std::cout << '.' << '\n';

    for (int i = 1; i <= S.length(); i++)
        if (i % 3)
            std::cout << ".#.#";
        else
            std::cout << ".*.*";
    std::cout << '.' << '\n';

    mid += '#';
    for (int i = 1; i <= S.length(); i++)
    {
        if (!(i % 3))
        {
            mid.erase(mid.end() - 1);
            mid += "*.";
        }
        else
            mid += '.';

        mid += S[i - 1];

        if (!(i % 3))
            mid += ".*";
        else
            mid += ".#";
    } std::cout << mid << '\n';

    for (int i = 1; i <= S.length(); i++)
        if (i % 3)
            std::cout << ".#.#";
        else
            std::cout << ".*.*";
    std::cout << '.' << '\n';

    for (int i = 1; i <= S.length(); i++)
        if (i % 3)
            std::cout << "..#.";
        else
            std::cout << "..*.";
    std::cout << '.';
}