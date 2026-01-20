#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B, C = 0;
    std::string As, Bs;
    std::cin >> A >> B;

    while (A)
    {
        if (A % 2) // 홀수면
            As += '1';
        else
            As += '0';

        A /= 2;
    }
    while (As.length() < 10) As += '0';
    std::reverse(As.begin(), As.end());

    while (B)
    {
        if (B % 2) // 홀수면
            Bs += '1';
        else
            Bs += '0';

        B /= 2;
    }
    while (Bs.length() < 10) Bs += '0';
    std::reverse(Bs.begin(), Bs.end());

    for (int i = 0; i < 10; i++)
        if (As[i] != Bs[i])
            C += std::pow(2, 9 - i);

    std::cout << C;
    return 0;
}