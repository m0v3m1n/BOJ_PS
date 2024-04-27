#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int R, C, sum = 0; std::cin >> R >> C;

    std::vector<int> tmp(C);
    for (auto& K : tmp)
        K = 0;

    std::vector<std::vector<int>> map;
    for (int i = 0; i < R; i++)
        map.push_back(tmp);

    for (int i = 0; i < C; i++)
    {
        std::cin >> tmp[i];
        for (int j = 0; j < tmp[i]; j++)
            map[j][i] = 2;
    }

    for (int i = 0; i < R; i++)
    {
        int tmp, j = 0;
        bool flag;

        while (j < C)
        {
            tmp = 0;
            flag = true;

            while (j < C && map[i][j] > 0)
                j++; // 벽 또는 이미 검사한 공간이면 끝날때까지 통과
            
            if (j < C && map[i][j] == 0) // 검사 안했으면
            {
                if (j == 0) // 근데 맨 왼쪽이면 컽!!!
                    flag = false;

                while (j < C && map[i][j] == 0) // 검사 안했을때까지
                {
                    map[i][j] = 1; // 검사했다 치고

                    tmp++; // 임시 물용량 증가에
                    j++; // 다음칸 ㄱㄱ
                }

                if (j == C) // 만약 맨 끝칸까지 갔다? --> 벽 없으니까 나가리
                    break;
                if (map[i][j] == 2 && flag) // 아니면 벽이라는 거니까
                    sum += tmp; // 임시 물 용량을 추가해줌
            }
        }
    }

    std::cout << sum;
    return 0;
}