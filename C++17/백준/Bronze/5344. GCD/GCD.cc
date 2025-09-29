#include <iostream>

int gcd(int a, int b)
{
    while (1)
    {
        if (a % b == 0)
            return b;
        else
        {
            int tmp = a % b;
            a = b;
            b = tmp;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, A, B; std::cin >> N;

    while (N--)
    {
        std::cin >> A >> B;
        std::cout << gcd(A, B) << '\n';
    }

    return 0;
}