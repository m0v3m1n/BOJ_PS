#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int M, a, b, s, ratio = 1;
    bool r = false;
    std::cin >> M;

    while (M--)
    {
        std::cin >> a >> b >> s;
        ratio = (ratio / a) * b;

        if (s == 1)
            r = !r;
    }

    std::cout << r << ' ' << ratio;
    return 0;
}
