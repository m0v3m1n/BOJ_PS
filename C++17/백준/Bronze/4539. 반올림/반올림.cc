#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, num, divide;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> num;
        divide = 10;

        while (num > divide)
        {
            if (num % divide >= (divide / 2))
            {
                num -= num % divide;
                num += divide;
            }
            else
                num -= num % divide;

            divide *= 10;
        }
        std::cout << num << '\n';
    }
    return 0;
}