#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, L; std::cin >> N >> L;
    for (int i = 0; i < L - 1; i++)
        std::cout << 1;
    std::cout << N;

    return 0;
}