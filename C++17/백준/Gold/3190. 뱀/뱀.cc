#include <iostream>
#include <deque>
#include <vector>
#include <map>

bool bodycheck(int R, int C, std::deque<std::pair<int, int>>& D)
{
    for (int i = 1; i < D.size(); i++)
    {
        if (D[i].first == R && D[i].second == C)
            return false;
    }
    return true;
}
// Deque은 front가 왼쪽, back이 오른쪽. 3, 5, 1, 2면 front가 3, back이 2
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, L; // N : 보드 크기, K : 사과 개수, L : 회전 횟수
    std::vector<std::pair<int, int>> appleLoc;
    std::map<int, int> rotate;

    std::cin >> N >> K;
    std::pair<int, int> apple;
    for (int i = 0; i < K; i++)
    {
        std::cin >> apple.first >> apple.second;
        appleLoc.push_back({apple.first - 1, apple.second - 1});
    }

    std::cin >> L;
    std::pair<int, char> r;
    for (int i = 0; i < L; i++)
    {
        std::cin >> r.first >> r.second;
        rotate[r.first] = r.second;
    }

    int r_move[4] = { 0,1,0,-1 };
    int c_move[4] = { 1,0,-1,0 };
    int dir = 0; // 0 = 오른, 1 = 아래, 2 = 왼, 3 = 위
    bool appleflag = false;
    // dir을 변경해가며 움직임 설정.

    std::deque<std::pair<int, int>> D;
    D.push_front({ 0,0 });
    int timecount = 0;

    while (1)
    {
       /* std::cout << timecount << ' ' << dir << ' ';
        for (auto& K : D)
            std::cout << K.first << ',' << K.second << ' ';
        std::cout << '\n';*/

        appleflag = false;

        if (0 <= D.front().first + r_move[dir] && D.front().first + r_move[dir] < N
            && 0 <= D.front().second + c_move[dir] && D.front().second + c_move[dir] < N
            && bodycheck(D.front().first + r_move[dir], D.front().second + c_move[dir], D)) // 이동 시 벽 안인지, 몸이랑 부딪히는지 체크
        {
            D.push_front({ D.front().first + r_move[dir], D.front().second + c_move[dir] });

            for (int i = 0; i < appleLoc.size(); i++)
            {
                if (appleLoc[i].first == D.front().first
                    && appleLoc[i].second == D.front().second)
                {
                    appleflag = true;
                    appleLoc.erase(appleLoc.begin() + i);
                    break;
                }
            }

            if (!appleflag)
                D.pop_back();

            timecount++;

            if (rotate.find(timecount) != rotate.end()) // 만약 timecount초에 뱡향 전환이 있다면
                if (rotate[timecount] == 'L')
                    dir = (4 + (dir - 1)) % 4;
                else
                    dir = (dir + 1) % 4;

        }
        else
            break;
    }

    std::cout << timecount + 1;
    return 0;
}