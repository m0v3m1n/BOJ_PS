#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int P, K, N;
    std::cin >> P;

    while (P--)
    {
        std::cin >> K >> N;

        int s1 = 0, s2 = 0, s3 = 0;
        for (int i = 1; i <= N; i++)
        {
            s1 += i;
            s2 += (i * 2 - 1);
            s3 += (i * 2);
        }

        std::cout << K << ' ' << s1 << ' ' << s2 << ' ' << s3 << '\n';
    }

    return 0;
}