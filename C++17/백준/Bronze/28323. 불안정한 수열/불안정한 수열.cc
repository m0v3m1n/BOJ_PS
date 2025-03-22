#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, t, tmp, count = 1; std::cin >> N >> t;

    if (N == 1)
    {
        std::cout << 1;
        return 0;
    }
    else
    {
        for (int i = 1; i < N; i++)
        {
            std::cin >> tmp;
            if (t % 2 != tmp % 2)
            {
                count++;
                t = tmp;
            }
        }
    }

    std::cout << count;
    return 0;
}