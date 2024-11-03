#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> V(n);
    for (int i = 0; i < n; i++)
        std::cin >> V[i];
    std::sort(V.begin(), V.end());

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int k = 1;

        for (int j = i + 1; j < i + 5; j++)
            if (V[j] - V[i] < 5 && V[j] - V[i]>0)
                k++;

        ans = std::max(ans, k);
    }

    if (ans >= 5)
        std::cout << 0;
    else
        std::cout << 5 - ans;
}