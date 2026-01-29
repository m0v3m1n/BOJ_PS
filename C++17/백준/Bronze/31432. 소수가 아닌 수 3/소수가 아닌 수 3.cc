#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, tmp; std::cin >> N;
    bool arr[10] = { false, };

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        arr[tmp] = true;
    }

    if (N == 1) // 하나만 가능하다면?
        if (arr[0]) // 그게 0이라면?
            std::cout << "YES" << '\n' << 0;
        else
            for (int i = 1; i < 10; i++)
                if (arr[i])
                    std::cout << "YES" << '\n' << i << i << i;
                else
                    continue;
    else // 2개 이상이라면?
        for(int i = 1; i < 10; i++)
            if (arr[i])
            {
                std::cout << "YES" << '\n' << i << i << i;
                break;
            }

    return 0;
}