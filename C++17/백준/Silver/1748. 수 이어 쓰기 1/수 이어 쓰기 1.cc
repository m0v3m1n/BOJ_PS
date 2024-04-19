#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    int sum = 0, exp = 1, step = 9;
    // step = 9, 99, 999, ... 가 될 것임.

    while (1)
    {
        if (N > step)
        {
            sum += (step * exp); // 199면 99 x 2 만큼 더해주고
            sum -= (step / 10) * exp; // 9개의 2만큼 빼주기

            step = (step * 10) + 9;
            exp++;
        }
        else
        {
            sum += (N - (step / 10)) * exp; // 199면 100 * 3 만큼 더해주기
            break;
        }
    }

    std::cout << sum;
    return 0;
}