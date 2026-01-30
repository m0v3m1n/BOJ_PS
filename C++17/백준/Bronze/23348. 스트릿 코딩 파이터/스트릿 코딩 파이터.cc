#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int ABC[3], N, score = 0, max = 0, tmp;
    std::cin >> ABC[0] >> ABC[1] >> ABC[2];

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        score = 0;

        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
            {
                std::cin >> tmp;
                score += (ABC[k] * tmp);
            }

        if (score > max)
            max = score;
    }

    std::cout << max;
    return 0;
}