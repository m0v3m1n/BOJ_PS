#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    bool flag;

    while (1)
    {
        flag = true;
        std::cin >> N;

        if (std::cin.eof())
            break;

        std::vector<int> V(N);
        std::vector<bool> TF(N, false);

        for (int i = 0; i < N; i++)
            std::cin >> V[i];

        for (int i = 1; i < N; i++)
            if (std::abs(V[i] - V[i - 1]) >= N)
                continue;
            else
                TF[std::abs(V[i] - V[i - 1])] = true;

        for (int i = 1; i < N; i++)
            if (!TF[i])
                flag = false;

        if (flag)
            std::cout << "Jolly" << '\n';
        else
            std::cout << "Not jolly" << '\n';
    }

    return 0;
}