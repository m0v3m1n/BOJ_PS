#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    bool carry = false;
    std::string binary, total;
    
    std::cin >> binary;
    std::reverse(binary.begin(), binary.end());

    total = binary;
    total.insert(0, "0000");

    for (int i = 0; i < binary.length(); i++)
    {
        if (total[i] == '1' && binary[i] == '1')
        {
            if (carry)
                total[i] = '1';
            else
                total[i] = '0';
            carry = true;
        }
        else if (total[i] == '0' && binary[i] == '0')
        {
            if (carry)
                total[i] = '1';
            else
                total[i] = '0';
            carry = false;
        }
        else // 0 & 1 || 1 & 0
            if (carry)
            {
                total[i] = '0';
                carry = true;
            }
            else
            {
                total[i] = '1';
                carry = false;
            }
    }

    for (int i = binary.length(); i < total.length(); i++)
    {
        if (carry)
            if (total[i] == '0')
            {
                total[i] = '1';
                carry = false;
            }
            else
            {
                total[i] = '0';
                carry = true;
            }
    }

    if (carry)
        total.push_back('1');

    std::reverse(total.begin(), total.end());
    std::cout << total;
    return 0;
}
