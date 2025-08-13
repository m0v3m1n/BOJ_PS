#include <iostream>
#include <vector>

void DFS(int start, int cur, std::vector<int>& want, std::vector<int>& state, std::vector<bool>& team)
{
    state[cur]++;
    int next = want[cur];

    if (state[next] == 0) // 다음 진입할 대상이 만약 방문 안했다면?
        DFS(start, next, want, state, team);
    else if (state[next] == 1) // 다음 진입할 대상이 만약 방문했다면? --> 사이클이라는 것.
    {
        state[cur] = 2;
        team[cur] = true;

        while (cur != next)
        {
            state[next] = 2;
            team[next] = true;

            next = want[next];
        }
    }
    state[cur] = 2; // 이후 종료 처리.
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;
    while (T--)
    {
        int N, count = 0; std::cin >> N;

        std::vector<int> want(N + 1);
        std::vector<int> state(N + 1, false);
        std::vector<bool> team(N + 1, false);

        for (int i = 1; i <= N; i++)
            std::cin >> want[i];

        for (int i = 1; i <= N; i++)
            if (!state[i])
                DFS(i, i, want, state, team);

        for (int i = 1; i <= N; i++)
            if (team[i] == 0)
                count++;

        std::cout << count << '\n';
    }
    return 0;
}