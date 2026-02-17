#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    while (N--)
    {
        int tmpI;
        char tmpC;

        std::cin >> tmpI >> tmpC;
        while (tmpI--)
            std::cout << tmpC;

        std::cout << '\n';
    }

    return 0;
}