#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    std::vector<std::vector<int>> state(N + 1, std::vector<int>(N + 1)); // 16 X 16 --> 자료형으로 데이터 절약은... 굳이..?
    std::vector<std::vector<std::vector<int>>> DP(N + 1, std::vector<std::vector<int>>(N + 1, std::vector<int>(3, 0)));
    
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            std::cin >> state[i][j];

    DP[1][2][0] = 1; // 최초 상태는 가로로 경우의 수 1 존재.
    for (int i = 1; i <= N; i++)
    {
        for (int j = 3; j <= N; j++) // (1, 3)부터 시작 --> (0, 1), (0, 2), ... (1, 1)은 경우의 수 0, (1, 2)는 시작점임.
        {
            DP[i][j][0] = DP[i][j - 1][0] + DP[i][j - 1][1];
            DP[i][j][1] = DP[i - 1][j - 1][0] + DP[i - 1][j - 1][1] + DP[i - 1][j - 1][2];
            DP[i][j][2] = DP[i - 1][j][1] + DP[i - 1][j][2];

            if (state[i - 1][j - 1] || state[i - 1][j] || state[i][j - 1]) // 좌단, 상단, 좌상단 중 하나가 벽일 경우
                DP[i][j][1] -= DP[i - 1][j - 1][0] + DP[i - 1][j - 1][1] + DP[i - 1][j - 1][2];

            if (state[i][j - 1])
                DP[i][j][0] -= DP[i][j - 1][0] + DP[i][j - 1][1];

            if (state[i - 1][j])
                DP[i][j][2] -= DP[i - 1][j][1] + DP[i - 1][j][2];
        }
    }

    if (state[N][N])
        std::cout << 0;
    else
        std::cout << DP[N][N][0] + DP[N][N][1] + DP[N][N][2];

    return 0;
}