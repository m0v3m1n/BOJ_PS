#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int S, M; std::cin >> S >> M;
    std::vector<bool> binary_S(10, false);
    std::vector<bool> binary_M(10, false);

    if (S < 1024)
        std::cout << "No thanks";
    else
    {
        S -= 1023;

        if ((S & ~M) == 0)
            std::cout << "Thanks";
        else
            std::cout << "Impossible";
    }

    return 0;
}