#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, tmp, tmpTmp, sum = 0;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp >> tmpTmp;
        sum += (tmp == 136 ? 1000 : tmp == 142 ? 5000 : tmp == 148 ? 10000 : 50000);
    }

    std::cout << sum;

    return 0;
}