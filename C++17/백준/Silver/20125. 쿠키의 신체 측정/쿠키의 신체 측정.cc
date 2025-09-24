#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, Torso = 0, lArm = 0, rArm = 0, lLeg = 0, rLeg = 0;
    std::cin >> N;
    std::cin.ignore();

    std::pair<int, int> heart;
    std::vector<std::string> V(N);
    for (auto& K : V)
        std::cin >> K;

    for (int i = 1; i < N - 1; i++)
        for (int j = 1; j < N - 1; j++)
            if (V[i - 1][j] == '*' && V[i][j - 1] == '*' && V[i + 1][j] == '*' && V[i][j + 1] == '*')
                heart = { i, j };

    for (int i = heart.first + 1; i < N; i++)
        if (V[i][heart.second] == '*')
            Torso++;

    for (int i = heart.second - 1; i >= 0; i--)
        if (V[heart.first][i] == '*')
            lArm++;

    for (int i = heart.second + 1; i < N; i++)
        if (V[heart.first][i] == '*')
            rArm++;

    for (int i = heart.first + 1; i < N; i++)
        if (V[i][heart.second - 1] == '*')
            lLeg++;

    for (int i = heart.first + 1; i < N; i++)
        if (V[i][heart.second + 1] == '*')
            rLeg++;

    std::cout << heart.first + 1 << ' ' << heart.second + 1 << '\n';
    std::cout << lArm << ' ' << rArm << ' ' << Torso << ' ' << lLeg << ' ' << rLeg;

    return 0;
}