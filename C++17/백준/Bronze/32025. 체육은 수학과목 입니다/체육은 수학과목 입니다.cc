#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int H, W;
    std::cin >> H >> W;

    std::cout << (H < W ? H * 50 : W * 50);
    return 0;
}