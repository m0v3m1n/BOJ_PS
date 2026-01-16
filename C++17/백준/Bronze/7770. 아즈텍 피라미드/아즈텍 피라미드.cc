#include <iostream>
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, H = 0, block = 0;
    std::cin >> N;
 
    while (block <= N)
    {
        block += 2 * H * H + 2 * H + 1;
        H++;
    }

    std::cout << H - 1;
    return 0;
}