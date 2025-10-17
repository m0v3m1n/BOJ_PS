#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, AT, ST, curTime = 0; std::cin >> N;
    std::vector<std::pair<int, int>> V(N);

    for (auto& K : V)
        std::cin >> K.first >> K.second;
    std::sort(V.begin(), V.end());

    for (int i = 0; i < N; i++)
    {
        if (curTime <= V[i].first) // if curTime is less then cow's arriveTime
            curTime = V[i].first + V[i].second; // arrive & test
        else // curTime is bigger then AT
            curTime += V[i].second; // just add the time
    }

    std::cout << curTime;
    return 0;
}