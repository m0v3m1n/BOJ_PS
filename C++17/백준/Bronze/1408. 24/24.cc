#pragma warning(disable:4996)
#include <iostream>

int main()
{
    int nh, nm, ns, h, m, s, rh, rm, rs;
    int now, eta, remain;

    std::scanf("%d:%d:%d", &nh, &nm, &ns);
    std::scanf("%d:%d:%d", &h, &m, &s);

    now = (nh * 60 * 60) + (nm * 60) + ns;
    eta = (h * 60 * 60) + (m * 60) + s;

    remain = eta - now;
    if (remain < 0)
        remain += (60 * 60 * 24);

    rs = remain % 60; rm = ((remain % (60 * 60)) - rs) / 60; rh = remain / (60 * 60);

    if (rh < 10)
        std::cout << '0';
    std::cout << rh << ':';

    if (rm < 10)
        std::cout << '0';
    std::cout << rm << ':';

    if (rs < 10)
        std::cout << '0';
    std::cout << rs;

    return 0;
}