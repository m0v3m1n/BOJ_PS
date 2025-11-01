#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int X, Y; std::cin >> X >> Y;

    if (X > Y)
        std::cout << X + Y;
    else
        std::cout << Y - X;

    return 0;
}