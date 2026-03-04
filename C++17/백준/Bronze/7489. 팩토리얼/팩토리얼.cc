#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--)
    {
        long long N, res = 1;
        std::cin >> N;

        for (int i = 2; i <= N; i++)
        {
            res *= i;

            while (res % 10 == 0) // 최우측수가 0이 아닐때까지 땡겨줌
                res /= 10;

            // 팩토리얼은 수가 크니까, 일정 범위 이상의 수는 없애줌
            // 어차피 일정 범위 이상의 수의 경우에도, 최우측수만 중요하기 때문.
            res %= 1000000000000;
        }

        std::cout << res % 10 << '\n';
    }

    return 0;
}