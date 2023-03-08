// 백준 2579번, 계단 오르기
// 문제 링크 : https://www.acmicpc.net/problem/2579

#include <iostream>

int DPArr[301] = {};
int StairArr[301] = {};

int main()
{
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        std::cin >> StairArr[i];
    }

    DPArr[1] = StairArr[1];
    DPArr[2] = StairArr[1] + StairArr[2];

    // 3번째 계단때의 최댓값은 첫번째 + 세번째 or 두번째 + 세번째.
    if (StairArr[1] > StairArr[2])
        DPArr[3] = StairArr[1] + StairArr[3];
    else
        DPArr[3] = StairArr[2] + StairArr[3];

    // 4번째 계단부터는?
    for (int i = 4; i <= N; i++)
    {
        // 두 칸 건너뛰고 오느냐 vs 두 칸 연속으로 밟고 가느냐.
        // DPArr[i - 2] + StairArr[i] 이 크다면, 두 칸 건너뛰는 것이 맞다.
        // DPArr[i - 3] + StairArr[i - 1] + StairArr[i]이 크다면, 연속으로 가는 것이 맞다.

        if (DPArr[i - 2] + StairArr[i] > DPArr[i - 3] + StairArr[i - 1] + StairArr[i])
            DPArr[i] = DPArr[i - 2] + StairArr[i];
        else
            DPArr[i] = DPArr[i - 3] + StairArr[i - 1] + StairArr[i];
    }

    std::cout << DPArr[N];

    return 0;
}
