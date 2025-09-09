#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = true;
    bool peak = false;
    int N, tmp;

    std::cin >> N;
    int* mountain = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> mountain[i];

    for (int i = 1; i < N; i++)
        if (mountain[i - 1] == mountain[i]) // 봉우리 높이는 같을 수 없음
            flag = false;
        else
        {
            if (!peak && mountain[i - 1] > mountain[i])
                peak = true;
            else if (peak && mountain[i - 1] > mountain[i])
                continue;
            else if (!peak && mountain[i - 1] < mountain[i])
                continue;
            else // (peak && mountain[i - 1] < mountain[i])
                flag = false;
        }

    if (flag)
        std::cout << "YES";
    else
        std::cout << "NO";

    delete[] mountain;
}