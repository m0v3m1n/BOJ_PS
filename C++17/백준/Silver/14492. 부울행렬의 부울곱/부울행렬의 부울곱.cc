#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, count = 0; std::cin >> N;
    std::vector<std::vector<int>> A(N, std::vector<int>(N));
    std::vector<std::vector<int>> B(N, std::vector<int>(N));
    std::vector<std::vector<int>> C(N, std::vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> A[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            std::cin >> B[i][j];

    for(int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            bool tmp = A[i][0] && B[0][j];

            for (int k = 1; k < N; k++)
                tmp = tmp || (A[i][k] && B[k][j]);

            C[i][j] = tmp;
        }

    for (auto& K : C)
        for (auto& L : K)
            if (L)
                count++;

    std::cout << count;
    return 0;
}