#include <iostream>
#include <vector>

void filling_space(std::vector<std::vector<char>>& V, int depth, int width, int limit)
{
    if (depth == limit)
        return;

    int space_start = (depth * 2) - 1;

    for (int i = space_start; i <= width; i++)
    {
        V[space_start][i] = ' ';
        V[width][i] = ' ';
    }

    for (int i = space_start; i <= width; i++)
    {
        V[i][space_start] = ' ';
        V[i][width] = ' ';
    }

    filling_space(V, depth + 1, width - 2, limit);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::vector<std::vector<char>> V((1 + (N - 1) * 4), std::vector<char>(1 + (N - 1) * 4, '*'));

    filling_space(V, 1, (N - 1) * 4 - 1, N);

    for (auto& K : V)
    {
        for (auto& L : K)
            std::cout << L;
        std::cout << '\n';
    }

    return 0;
}