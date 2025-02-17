#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int M;
    std::string N, S;

    std::cin >> N >> M;

    for (int i = 0; i < std::stoi(N); i++)
        S += N;

    if (S.size() >= M)
        for (int i = 0; i < M; i++)
            std::cout << S[i];
    else
        std::cout << S;

    return 0;
}
