#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int K;
    std::string S;

    std::cin >> K;
    for (int i = 0; i < K; i++)
        S += '1';
    for (int i = 0; i < K - 1; i++)
        S += '0';

    std::cout << S;
}
