#include <iostream>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    double r, w, l, n = 1;

    while (1)
    {
        std::cin >> r;
        if (r == 0)
            break;

        std::cin >> w >> l;
        w /= 2.0;
        l /= 2.0;

        if (r >= std::sqrt(w * w + l * l))
            std::cout << "Pizza " << n << " fits on the table." << '\n';
        else
            std::cout << "Pizza " << n << " does not fit on the table." << '\n';
        n++;
    }
}
