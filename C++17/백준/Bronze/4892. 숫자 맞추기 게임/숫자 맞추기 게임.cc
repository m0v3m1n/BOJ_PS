#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, num = 1;
    bool flag = false;

    while (1)
    {
        std::cin >> N;
        flag = false;

        if (!N)
            break;
        else
        {
            N *= 3; // n1

            if (!(N % 2)) // even
                flag = true;
            else // odd
                flag = false;

            if (flag)
                N /= 2;
            else
                N = (N + 1) / 2; // n2

            N *= 3; // n3

            N /= 9; // n4

            if (flag)
                std::cout << num << ". even " << N << '\n';
            else
                std::cout << num << ". odd " << N << '\n';

            num++;
        }
    }
}