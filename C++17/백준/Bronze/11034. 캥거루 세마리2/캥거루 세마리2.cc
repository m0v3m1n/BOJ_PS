#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B, C;
    while (std::cin >> A >> B >> C)
        std::cout << (B - A - 1 > C - B - 1 ? B - A - 1 : C - B - 1) << '\n';

    return 0;
}