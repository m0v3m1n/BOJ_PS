#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, T, tmp;
    std::cin >> N >> T;

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        T -= tmp;

        if (T < 0)
        {
            std::cout << i;
            break;
        }
        else
            continue;
    }

    if (T >= 0)
        std::cout << N;
}
