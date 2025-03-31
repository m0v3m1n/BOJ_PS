#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;

    while (T--)
    {
        long long N, M, a, b, p, q, min = 99999999999, max = 0;
        std::cin >> N >> M;

        std::vector<long long> P(N, 0);
        std::vector<long long> Q(N, 0);
        std::vector<long long> expected(N);

        for (int i = 0; i < M; i++)
        {
            std::cin >> a >> b >> p >> q;

            P[a - 1] += p;
            P[b - 1] += q;

            Q[a - 1] -= q;
            Q[b - 1] -= p;
        }

        for (int i = 0; i < N; i++)
        {
            if (P[i] == 0 && Q[i] == 0)
                expected[i] = 0;
            else
                expected[i] = (1000 * P[i] * P[i]) / (P[i] * P[i] + Q[i] * Q[i]);

            if (expected[i] > max)
                max = expected[i];
            if (expected[i] < min)
                min = expected[i];
        }

        std::cout << max << '\n' << min << '\n';
    }

    return 0;
}