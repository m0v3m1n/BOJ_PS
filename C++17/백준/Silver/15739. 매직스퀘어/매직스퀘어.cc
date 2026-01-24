#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag1 = true, flag2 = true;
    int N, diagonal_leftStart = 0, diagonal_rightStart = 0;

    std::cin >> N;
    std::vector<bool> exist(N * N + 1, false);
    std::vector<std::vector<int>> V(N, std::vector<int>(N));
    for (auto& K : V)
        for (auto& L : K)
            std::cin >> L;

    // 조건 1
    for (auto& K : V)
        for (auto& L : K)
            exist[L] = true; // 2차원 행렬 순회 --> 존재하는 값 True 판정

    for (int i = 1; i < exist.size(); i++)
        if (!exist[i])
            flag1 = false; // 1부터 N * N에서, 하나라도 없는 값이 있다면 flag 비활성화

    // 조건 2
    int sum = N * (N * N + 1) / 2;
    for (int i = 0; i < N; i++)
    {
        int rowSum = 0, colSum = 0;

        for (int j = 0; j < N; j++)
        {
            rowSum += V[i][j];
            colSum += V[j][i];
        }

        if (rowSum != sum || colSum != sum)
            flag2 = false;

        diagonal_leftStart += V[i][i];
        diagonal_rightStart += V[i][N - i - 1];
    }

    if (diagonal_leftStart != sum || diagonal_rightStart != sum)
        flag2 = false;

    if (flag1 && flag2)
        std::cout << "TRUE";
    else
        std::cout << "FALSE";

    return 0;
}