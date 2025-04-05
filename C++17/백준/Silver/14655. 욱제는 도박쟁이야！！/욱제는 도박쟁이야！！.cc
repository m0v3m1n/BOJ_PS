#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, sum = 0, tmp; std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        if (tmp > 0)
            sum += tmp;
        else
            sum += -tmp;
    }
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        if (tmp > 0)
            sum += tmp;
        else
            sum += -tmp;
    }

    std::cout << sum;
    return 0;
}