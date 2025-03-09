#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while (T--)
    {
        int N;
        std::cin >> N;

        int maxVal = 0;
        int sum = 0;
        int maxIdx = -1;
        bool same = false;

        for (int i = 0; i < N; i++)
        {
            int val;
            std::cin >> val;

            sum += val;
            if (val == maxVal)
                same = true;
            else if (val > maxVal)
            {
                maxIdx = i;
                maxVal = val;
                same = false;
            }
        }

        if (same)
            std::cout << "no winner\n";
        else
        {
            sum -= maxVal;

            if (sum < maxVal)
                std::cout << "majority winner " << maxIdx + 1 << "\n";
            else
                std::cout << "minority winner " << maxIdx + 1 << "\n";
        }
    }
    return 0;
}