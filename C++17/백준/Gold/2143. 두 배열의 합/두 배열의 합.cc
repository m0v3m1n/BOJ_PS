#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T, N, M;
    long long sum = 0;
    std::cin >> T;

    std::cin >> N;
    std::vector<int> A(N + 1, 0), prefix_sum_A;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> A[i];
        A[i] += A[i - 1];
    }

    std::cin >> M;
    std::vector<int> B(M + 1, 0), prefix_sum_B;
    for (int i = 1; i <= M; i++)
    {
        std::cin >> B[i];
        B[i] += B[i - 1];
    }

    for (int i = 1; i <= N; i++)
        for (int j = 0; j < i; j++)
            prefix_sum_A.push_back(A[i] - A[j]);

    for (int i = 1; i <= M; i++)
        for (int j = 0; j < i; j++)
            prefix_sum_B.push_back(B[i] - B[j]);

    std::sort(prefix_sum_A.begin(), prefix_sum_A.end());
    std::sort(prefix_sum_B.begin(), prefix_sum_B.end());

    for (int i = 0; i < prefix_sum_A.size(); i++)
    {
        int finding = T - prefix_sum_A[i];
        if (std::binary_search(prefix_sum_B.begin(), prefix_sum_B.end(), finding))
        {
            auto lower = std::lower_bound(prefix_sum_B.begin(), prefix_sum_B.end(), finding);
            auto upper = std::upper_bound(prefix_sum_B.begin(), prefix_sum_B.end(), finding);
            sum += (upper - lower);
        }
    }
    
    std::cout << sum;
    return 0;
}
