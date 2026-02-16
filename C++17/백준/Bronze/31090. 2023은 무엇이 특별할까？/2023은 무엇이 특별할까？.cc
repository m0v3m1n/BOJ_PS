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
        int tmp;
        std::cin >> tmp;

        if ((tmp + 1) % (tmp % 100) == 0)
            std::cout << "Good" << '\n';
        else
            std::cout << "Bye" << '\n';
    }

    return 0;
}