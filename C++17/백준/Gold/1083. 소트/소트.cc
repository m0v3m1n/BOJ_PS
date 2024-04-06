#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, S, elementForSwap;

    std::cin >> N;
    std::vector<int> V(N);

    for (int i = 0; i < N; i++)
        std::cin >> V[i];
    std::cin >> S;

    int startidx = 0;
    while (startidx < N && S > 0)
    {
        int tmp_maxidx = startidx;
        for (int i = startidx; i <= startidx + S; i++) // startidx에서 S 거리 안에 있는 가장 큰 값 탐색
        {
            if (i == N)
                break;

            if (V[tmp_maxidx] < V[i])
                tmp_maxidx = i;
        }

        for (int i = tmp_maxidx; i > startidx; i--) // tmp_maxidx부터 startidx까지 swap
        {
            elementForSwap = V[i];
            V[i] = V[i - 1];
            V[i - 1] = elementForSwap;

            S--;
            //for (auto& K : V)
            //    std::cout << K << ' ';
            //std::cout << '\n' << "-------------------\n";
        }

        startidx++;
    }

    for (auto& K : V)
        std::cout << K << ' ';
    return 0;
}