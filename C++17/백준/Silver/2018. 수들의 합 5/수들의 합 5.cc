#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int left = 1, right = 1, sum = 0, cnt = 0;
    int N; std::cin >> N;

    while (left <= N)
    {
        if (sum < N)
        {
            sum += right;
            right++;
        }
        else if (sum > N)
        {
            sum -= left;
            left++;
        }
        else
        {
            cnt++;
            sum -= left;
            left++;
        }
    }

    std::cout << cnt;
    return 0;
}