#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, K; std::cin >> N >> M >> K;
    std::vector<std::vector<int>> hands(N, std::vector<int>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            std::cin >> hands[i][j];

    for(int j = 0; j < M; j++)
        for (int i = 0; i < N; i++)
        {
            if (j) // 두번째 열부터는 이전 열의 값 더해줌
                hands[i][j] += hands[i][j - 1];
               
            if (hands[i][j] >= K)
            {
                std::cout << i + 1 << ' ' << j + 1;
                return 0;
            }
        }

    return 0;
}