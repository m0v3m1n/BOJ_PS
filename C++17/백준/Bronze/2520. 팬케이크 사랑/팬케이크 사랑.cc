#include <iostream>
#include <limits>

int main()
{
    int T;
    std::cin >> T;

    double gram1[] = { 0.5, 0.5, 0.25, 0.0625, 0.5625 };
    int gram2[] = { 1, 30, 25, 10 };

    while (T--)
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        int line1[5];
        int line2[4];

        int maxVal = 1000000000;

        for (int i = 0; i < 5; i++)
        {
            std::cin >> line1[i];
            int nowMax = static_cast<int>(line1[i] / gram1[i]);

            if (maxVal > nowMax)
                maxVal = nowMax;
        }

        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            std::cin >> line2[i];
            cnt += (line2[i] / gram2[i]);
        }

        if (maxVal < cnt)
            std::cout << maxVal << "\n";
        else
            std::cout << cnt << "\n";
    }

    return 0;
}
