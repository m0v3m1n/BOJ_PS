#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, cnt = 0;
    std::cin >> N;

    if (N < 0)
        std::cout << 32;
    else if (N == 0)
        std::cout << 1;
    else
    {
        while (N)
        {
            cnt++;
            N = N >> 1;
        }

        std::cout << cnt;
    }

    return 0;
}