#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, a, b, av = 0, bv = 0; std::cin >> N;

    while (N--)
    {
        std::cin >> a >> b;
        if (a > b)
            av++;
        else if (a < b)
            bv++;
        else
            continue;
    }

    std::cout << av << ' ' << bv;
}
