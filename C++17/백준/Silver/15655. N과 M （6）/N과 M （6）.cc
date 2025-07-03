#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void BT(std::vector<int>& V, std::vector<int>& tmp, int idx, int depth, int M)
{
    if (depth == M)
    {
        for (auto& K : tmp)
            std::cout << K << ' ';
        std::cout << '\n';
        return;
    }

    for (int i = idx; i < V.size(); i++)
    {
        tmp.push_back(V[i]);
        BT(V, tmp, i + 1, depth + 1, M);
        tmp.pop_back();
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M; std::cin >> N >> M;
    std::vector<int> V(N);
    std::vector<int> tmp;
    for (int i = 0; i < N; i++)
        std::cin >> V[i];

    for(int i = N - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (V[j] > V[j + 1])
            {
                int tmp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = tmp;
            } // Bubble sort... N <= 8이므로 std::sort 대신 대충 짜봄

    BT(V, tmp, 0, 0, M);
    return 0;
}