#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = false;
    int A, B, N, W, x, y;
    std::cin >> A >> B >> N >> W;

    // Ax + By = W
    // x + y = N

    for (int i = 1; i < N; i++)
        if (A * i + B * (N - i) == W)
            if (!flag)
            {
                flag = true;
                x = i; y = N - i;
            }
            else
            {
                std::cout << -1;
                return 0;
            }

    if (flag)
        std::cout << x << ' ' << y;
    else
        std::cout << -1;

    return 0;
}