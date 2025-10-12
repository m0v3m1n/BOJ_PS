#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, remain_time = 30, count = 0; std::cin >> N;

    std::vector<int> Subject(N);
    std::vector<int> Studied(N);
    for (auto& K : Subject)
        std::cin >> K;

    for (int i = 0; i < N; i++)
    {
        if (Subject[i] < remain_time)
        {
            Studied[i] = Subject[i];
            remain_time -= Subject[i];
        }
        else
        {
            Studied[i] = remain_time;
            remain_time = 30;
        }
    }

    for (int i = 0; i < N; i++)
        if (Subject[i] % 2) // 홀수면
            if ((Subject[i] + 1) / 2 <= Studied[i])
                count++;
            else
                continue;
        else
            if (Subject[i] / 2 <= Studied[i])
                count++;
            else
                continue;

    std::cout << count;
    return 0;
}