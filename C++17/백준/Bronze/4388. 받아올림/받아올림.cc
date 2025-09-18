#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b;
    std::string as, bs;
    while (1)
    {
        int carryCount = 0;
        bool carry = false;

        std::cin >> a >> b;

        if (!a && !b)
            break;

        as = std::to_string(a);
        bs = std::to_string(b);

        std::reverse(as.begin(), as.end());
        std::reverse(bs.begin(), bs.end());

        for (int i = 0; i < std::min(as.length(), bs.length()); i++)
            if (as[i] - '0' + bs[i] - '0' + carry >= 10)
            {
                carry = true;
                carryCount++;
            }
            else
                carry = false;

        for (
            int i = (as.length() > bs.length() ? bs.length() : as.length());
            i < (as.length() > bs.length() ? as.length() : bs.length());
            i++)
        {
            int sum = as.length() > bs.length() ? as[i] : bs[i] + carry;

            if (sum >= 10)
            {
                carry = true;
                carryCount++;
            }
            else
                carry = false;
        }

        std::cout << carryCount << '\n';
    }

    return 0;
}