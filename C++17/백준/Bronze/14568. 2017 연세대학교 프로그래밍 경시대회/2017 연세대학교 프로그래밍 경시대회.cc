#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N; std::cin >> N; // 사탕 개수
    int count = 0;

    // 영훈 + 택희 + 남규 = N
    // 영훈 + 2 <= 남규
    // 영훈 && 택희 && 남규 (모두 1 이상)
    // 택희 % 2 == 0
    
    for (int n = 1; n < N - 2; n++) // 남규 1개부터 시작
        for (int y = n + 2; n + y < N; y++) // 남규보다 2개 많은 영훈
            for (int t = 2; t + y + n <= N; t += 2) // 택희는 2개부터 시작
                if (n + y + t == N)
                {
                    count++;
                    break;
                }
                else if (n + y + t > N)
                    break;
                else
                    continue;

    std::cout << count;
    return 0;
}