#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    bool res = false;
    bool x[10];
    for (int i = 0; i < 10; i++)
        std::cin >> x[i];

    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
        {
            res ^= (x[i] || x[j]);
            for (int k = j + 1; k < 10; k++)
                res ^= (x[i] || x[j] || x[k]);
        }

    std::cout << res;
    return 0;
}