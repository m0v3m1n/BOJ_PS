#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 9999999

int main()
{
    int N;

    int house[1001][3];
    int DP[1001][3];
    std::vector<int> V;

    std::cin >> N;

    for (int i = 0; i < N; i++)
        std::cin >> house[i][0] >> house[i][1] >> house[i][2];

    // R 시작
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            DP[i][j] = MAX;
    DP[0][0] = house[0][0]; // 처음에 R만 넣기
    // --> 2번째는 첫번쨰에 R 색칠한거 + G 또는 B (2번째에 R하면 MAX임)
    for (int i = 1; i < N; i++)
    {
        DP[i][0] = house[i][0] + std::min(DP[i - 1][1], DP[i - 1][2]);
        DP[i][1] = house[i][1] + std::min(DP[i - 1][0], DP[i - 1][2]);
        DP[i][2] = house[i][2] + std::min(DP[i - 1][0], DP[i - 1][1]);
    }
    V.push_back(DP[N - 1][1]);
    V.push_back(DP[N - 1][2]);

    // G 시작
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            DP[i][j] = MAX;
    DP[0][1] = house[0][1];  // 처음에 G만 넣기
    for (int i = 1; i < N; i++)
    {
        DP[i][0] = house[i][0] + std::min(DP[i - 1][1], DP[i - 1][2]);
        DP[i][1] = house[i][1] + std::min(DP[i - 1][0], DP[i - 1][2]);
        DP[i][2] = house[i][2] + std::min(DP[i - 1][0], DP[i - 1][1]);
    }
    V.push_back(DP[N - 1][0]);
    V.push_back(DP[N - 1][2]);

    // B 시작
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            DP[i][j] = MAX;
    DP[0][2] = house[0][2];  // 처음에 B만 넣기
    for (int i = 1; i < N; i++)
    {
        DP[i][0] = house[i][0] + std::min(DP[i - 1][1], DP[i - 1][2]);
        DP[i][1] = house[i][1] + std::min(DP[i - 1][0], DP[i - 1][2]);
        DP[i][2] = house[i][2] + std::min(DP[i - 1][0], DP[i - 1][1]);
    }
    V.push_back(DP[N - 1][0]);
    V.push_back(DP[N - 1][1]);

    /*
    for (auto& K : V)
        std::cout << K << '\n';
    */
    std::sort(V.begin(), V.end());
    std::cout << V[0];

    return 0;
}