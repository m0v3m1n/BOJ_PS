#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, e;
    bool TMa = false, TMe = false;
    bool VSa = false, VSe = false;
    bool GMa = false, GMe = false;

    std::cin >> a >> e;
    if (a >= 3)
        TMa = true;
    if (e <= 4)
        TMe = true;

    if (a <= 6)
        VSa = true;
    if (e >= 2)
        VSe = true;

    if (a <= 2)
        GMa = true;
    if (e <= 3)
        GMe = true;

    if (TMa && TMe)
        std::cout << "TroyMartian" << '\n';
    if (VSa && VSe)
        std::cout << "VladSaturnian" << '\n';
    if (GMa && GMe)
        std::cout << "GraemeMercurian" << '\n';

    return 0;
}