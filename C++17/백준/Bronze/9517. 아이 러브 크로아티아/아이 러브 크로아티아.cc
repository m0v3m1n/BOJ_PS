#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int K, N, T;
    int remainTime = 210;
    char Z;

    std::cin >> K >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> T >> Z;
        if (remainTime - T <= 0)
        {
            std::cout << K;
            return 0;
        }

        remainTime -= T;
        if (Z == 'T')
            K = (K == 8 ? 1 : K + 1);
    }
}