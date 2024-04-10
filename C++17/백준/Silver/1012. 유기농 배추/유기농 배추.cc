#include <iostream>
#include <queue>
#include <vector>

void BFS(int n, int m, int r, int c, std::vector<std::vector<bool>>& visited, std::vector<std::vector<bool>>& V)
// 매개변수는 각각 행렬 최대 크기, 배추 현재 좌표, 방문여부 지도 및 배추밭 지도
{
    int r_move[4] = { -1, 1, 0, 0 };
    int c_move[4] = { 0, 0, -1, 1 };
    // 상하좌우 움직였을 때의 좌표 변화 계산용 배열.

    std::queue<std::pair<int, int>> Q;
    Q.push({ r,c });
    visited[r][c] = true;

    while (!Q.empty())
    {
        int curR = Q.front().first;
        int curC = Q.front().second;

        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nextR = curR + r_move[i];
            int nextC = curC + c_move[i];

            if (0 <= nextR && nextR < n && 0 <= nextC && nextC < m // 움직여도 배추밭 안이면서
                && !visited[nextR][nextC] && V[nextR][nextC]) // 방문하지 않은 배추일 때
            {
                Q.push({ nextR, nextC });
                visited[nextR][nextC] = true;
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T, M, N, BaeChoo, C, R, count;
    // 테스트 케이스 수, 배추밭 크기 및 배추 갯수, 배추 좌표,
    // BFS 실행 횟수 기록용 변수 선언.
    std::cin >> T;

    while (T--)
    {
        std::cin >> M >> N >> BaeChoo;

        std::vector<bool> tmp(M, 0);
        std::vector<std::vector<bool>> V(N), visited(N);
        count = 0; // 2차원 벡터 생성 및 count를 0으로 초기화.

        for (int i = 0; i < N; i++)
        {
            V[i] = tmp; // N행 M열 배추밭 만들어주기.
            visited[i] = tmp; // N행 M열 방문 지도 만들어주기.
        }

        for (int i = 0; i < BaeChoo; i++)
        {
            std::cin >> C >> R; // X와 Y를 입력받음.
            V[R][C] = 1; // N행 M열이 되려면 (C,R)이 아닌 (R,C)여야 함.
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (V[i][j] == 1 && !visited[i][j]) // 배추가 심어져있으면서 방문하지 않았다면
                {
                    BFS(N, M, i, j, visited, V);
                    count++;
                }
            }
        }

        std::cout << count << '\n';
    }
    return 0;
}
