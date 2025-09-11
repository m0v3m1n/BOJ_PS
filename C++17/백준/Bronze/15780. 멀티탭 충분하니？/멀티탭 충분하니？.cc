#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, tmp, possible = 0;
    std::cin >> N >> K;

    for (int i = 0; i < K; i++)
    {
        std::cin >> tmp;
        if (tmp % 2) // 홀수면 나머지가 1 --> True
            possible += tmp / 2 + 1;
        else
            possible += tmp / 2;
    }

    if (possible >= N)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}