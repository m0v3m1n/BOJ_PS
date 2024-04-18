#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long A, B, m, sum = 0, trans = 0;
    std::cin >> A >> B >> m;

    std::vector<long long> V(m); // 변환 전
    std::vector<long long> W; // 변환 후 
    for (int i = 0; i < m; i++)
        std::cin >> V[i];

    int exp = V.size() - 1;
    int idx = 0;

    while (exp >= 0) // == idx < V.size랑 비슷
    {
        sum += V[idx] * std::pow(A, exp);
        idx++;
        exp--;
    }

    while (sum > 0)
    {
        W.push_back(sum % B);
        sum /= B;
    }

    for (int i = W.size() - 1; i >= 0; i--)
        std::cout << W[i] << ' ';

    return 0;
}