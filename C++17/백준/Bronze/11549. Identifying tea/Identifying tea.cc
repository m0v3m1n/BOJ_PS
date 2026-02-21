#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, tmp, sum = 0;
    std::cin >> N;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> tmp;
        if (N == tmp)
            sum++;
    }

    std::cout << sum;
    return 0;
}