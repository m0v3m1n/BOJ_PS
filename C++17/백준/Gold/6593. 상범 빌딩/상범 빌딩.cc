#include <iostream>
#include <vector>
#include <queue>

struct point
{
    int x, y, z, depth;
};

struct move
{
    int x_move;
    int y_move;
    int z_move;
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int x, y, z;
    int sx, sy, sz;
    int ex, ey, ez;

    move moving[6] = { // 동, 서, 남, 북, 상 하. 이때 동/서 : z, 남/북 : x, 상/하 : y
        {0,0,1}, {0,0,-1}, {1,0,0}, {-1,0,0},{0,1,0},{0,-1,0}
    };

    while (1)
    {
        std::cin >> x >> y >> z;

        if (x == 0 && y == 0 && z == 0)
            break;

        std::string mapping;
        std::vector<std::vector<std::vector<bool>>> visited(x + 1, std::vector<std::vector<bool>>(y + 1, std::vector<bool>(z + 1, false)));
        std::vector<std::vector<std::vector<bool>>> can_pass(x + 1, std::vector<std::vector<bool>>(y + 1, std::vector<bool>(z + 1)));

        for (int i = 1; i <= x; i++)
            for (int j = 1; j <= y; j++)
            {
                std::cin >> mapping;
                for (int k = 0; k < mapping.length(); k++)
                    if (mapping[k] == 'S')
                    {
                        sx = i;
                        sy = j;
                        sz = k + 1;
                        can_pass[i][j][k + 1] = true;
                    }
                    else if (mapping[k] == 'E')
                    {
                        ex = i;
                        ey = j;
                        ez = k + 1;
                        can_pass[i][j][k + 1] = true;
                    }
                    else if (mapping[k] == '.')
                        can_pass[i][j][k + 1] = true;
                    else
                        can_pass[i][j][k + 1] = false;
            }

        point start = { sx, sy, sz, 0 };
        point end = { ex, ey, ez, 30000 }; // 30 x 30 x 30 = 27,000
        visited[sx][sy][sz] = true;

        std::queue<point> Q;
        Q.push(start);

        while (!Q.empty())
        {
            point cur = Q.front();
            Q.pop();

            if (cur.x == end.x && cur.y == end.y && cur.z == end.z)
            {
                if (cur.depth < end.depth)
                    end.depth = cur.depth;
                break;
            }

            for (int i = 0; i < 6; i++)
            {
                point moved = { cur.x + moving[i].x_move ,
                    cur.y + moving[i].y_move,
                    cur.z + moving[i].z_move,
                    cur.depth + 1 };

                if (0 < moved.x && moved.x <= x
                    && 0 < moved.y && moved.y <= y
                    && 0 < moved.z && moved.z <= z) // 이동했을 때 허용범위 안이면
                {
                    if (can_pass[moved.x][moved.y][moved.z]
                        && !visited[moved.x][moved.y][moved.z]) // 방문하지 않았다면
                    {
                        visited[moved.x][moved.y][moved.z] = true;
                        Q.push(moved);
                    }
                }
            }
        }

        if (visited[ex][ey][ez] == false)
            std::cout << "Trapped!" << '\n';
        else
            std::cout << "Escaped in " << end.depth << " minute(s)." << '\n';
    }
    
    return 0;
}