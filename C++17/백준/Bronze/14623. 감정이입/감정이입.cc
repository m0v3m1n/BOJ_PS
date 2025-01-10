#include <iostream>

long long power(long long p)
{
    long long r = 1;
    for (int i = 0; i < p; i++)
        r *= 2;
    return r;
}
int main()
{
    std::string a, b, m; std::cin >> a >> b;

    long long A = 0; long long B = 0;
    long long mul;

    for (int i = a.length() - 1; i >= 0; i--)
        if (a[i] == '1')
            A += power(a.length() - (i + 1));

    for (int i = b.length() - 1; i >= 0; i--)
        if (b[i] == '1')
            B += power(b.length() - (i + 1));

    // std::cout << A << ' '  << B;
    mul = A * B;
    
    while (mul)
    {
        if (mul % 2 == 0)
            m += '0';
        else
            m += '1';

        mul /= 2;
    }
    
    for (int i = m.length() - 1; i >= 0; i--)
        std::cout << m[i];
}
