#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, a, b, X = 0; std::cin >> N >> K;
    std::vector<int> diff(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        diff[i] = b - a;
    } std::sort(diff.begin(), diff.end());

    for (int i = 0; i < N; i++)
    {
        if (diff[i] > 0)
            X = diff[i];

        K--;

        if (!K)
            break;
    }

    std::cout << X;
    return 0;
}