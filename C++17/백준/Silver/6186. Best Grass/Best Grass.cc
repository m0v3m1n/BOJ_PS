#include <iostream>
#include <queue>

std::pair<int, int> move[4] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

void BFS(int r, int c, std::vector<std::string>& map, std::vector<std::vector<bool>>& visited)
{
    std::queue<std::pair<int, int>> Q;
    std::pair<int, int> cur = { r, c };

    int row = map.size();
    int col = map[0].size();

    Q.push(cur);
    while (!Q.empty())
    {
        cur = Q.front();
        visited[cur.first][cur.second] = true;
        Q.pop();

        for (int i = 0; i < 4; i++)
            if (0 <= cur.first + move[i].first && cur.first + move[i].first < row
                && 0 <= cur.second + move[i].second && cur.second + move[i].second < col)
            {
                if (map[cur.first + move[i].first][cur.second + move[i].second] == '#'
                    && !visited[cur.first + move[i].first][cur.second + move[i].second])
                {
                    Q.push({ cur.first + move[i].first, cur.second + move[i].second });
                }
            }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int R, C, count = 0; std::cin >> R >> C;
    
    std::vector<std::vector<bool>> visited(R, std::vector<bool>(C, false));
    std::vector<std::string> map(R);
    for (int i = 0; i < R; i++)
        std::cin >> map[i];

    for(int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
        {
            if (!visited[i][j] && map[i][j] == '#')
            {
                BFS(i, j, map, visited);
                count++;
            }
        }

    std::cout << count;
    return 0;
}