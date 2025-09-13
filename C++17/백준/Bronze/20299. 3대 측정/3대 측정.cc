#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, L, a, b, c; std::cin >> N >> K >> L;
    std::vector<int> V;

    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b >> c;
        if (a + b + c >= K && a >= L && b >= L && c >= L)
        {
            V.push_back(a);
            V.push_back(b);
            V.push_back(c);
        }
    }

    std::cout << V.size() / 3 << '\n';
    for (auto& K : V)
        std::cout << K << ' ';
    
    
    return 0;
}