#include <iostream>
#include <string>
#include <deque>

std::deque<int> T[4];

void rotate(int n, int dir)
{ // num은 톱니바퀴 번호(0,1,2,3), dir은 방향 (1은 시계, -1은 반시계) 
    int num = n - 1;
    if (dir == 1)
    {
        int tmp = T[num][7];
        T[num].push_front(tmp);
        T[num].pop_back();
    }
    else
    {
        int tmp = T[num][0];
        T[num].push_back(tmp);
        T[num].pop_front();
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int K, num, dir, sum = 0;
    bool t1_t2, t2_t3, t3_t4;
    std::string S;

    for (int i = 0; i < 4; i++)
    {
        std::cin >> S;
        for (int j = 0; j < 8; j++)
            T[i].push_back(S[j] - '0');
    }
    // 12시가 0번 idx, 3시는 2번, 9시는 6번.
    std::cin >> K;
    for (int i = 0; i < K; i++)
    {
        t1_t2 = false, t2_t3 = false, t3_t4 = false;
        std::cin >> num >> dir;

        if (T[0][2] != T[1][6])
            t1_t2 = true;
        if (T[1][2] != T[2][6])
            t2_t3 = true;
        if (T[2][2] != T[3][6])
            t3_t4 = true;

        if (num == 1)
        {
            if (t1_t2 == true)
            {
                if (t2_t3 == true)
                {
                    if (t3_t4 == true) // 1-2, 2-3, 3-4
                    {
                        rotate(2, -dir);
                        rotate(3, dir);
                        rotate(4, -dir);
                    }
                    else // 1-2, 2-3이 다름
                    {
                        rotate(2, -dir);
                        rotate(3, dir);
                    }
                }
                else // 1-2가 다름
                    rotate(2, -dir);
            }
            rotate(1, dir);
        }
        else if (num == 2)
        {
            if (t1_t2 == true) // 1-2 다름
                rotate(1, -dir);

            if (t2_t3 == true)
            {
                if (t3_t4 == true) // 2-3, 3-4 다름
                {
                    rotate(3, -dir);
                    rotate(4, dir);
                }
                else // 2-3 다름
                    rotate(3, -dir);
            }
            rotate(2, dir);
        }
        else if (num == 3)
        {
            if (t3_t4 == true) // 3-4 다름
                rotate(4, -dir);

            if (t2_t3 == true)
            {
                if (t1_t2 == true) // 2-3, 1-2 다름
                {
                    rotate(2, -dir);
                    rotate(1, dir);
                }
                else // 2-3 다름
                    rotate(2, -dir);
            }
            rotate(3, dir);
        }
        else // 4번 톱니일 때
        {
            if (t3_t4 == true)
            {
                if (t2_t3 == true)
                {
                    if (t1_t2 == true) // 1-2, 2-3, 3-4 다름
                    {
                        rotate(3, -dir);
                        rotate(2, dir);
                        rotate(1, -dir);
                    }
                    else // 2-3, 3-4 다름
                    {
                        rotate(3, -dir);
                        rotate(2, dir);
                    }
                }
                else // 3-4 가 다름
                    rotate(3, -dir);
            }

            rotate(4, dir);
        }
    }

    sum += T[0][0]; sum += T[1][0] * 2;
    sum += T[2][0] * 4; sum += T[3][0] * 8;

    std::cout << sum;
    return 0;
}