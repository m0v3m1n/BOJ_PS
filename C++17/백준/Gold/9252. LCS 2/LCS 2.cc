#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string S1, S2;
    std::cin >> S1 >> S2;

    std::vector<std::vector<int>> V(S1.size() + 1);
    std::vector<int> tmp(S2.size() + 1, 0);

    for (int i = 0; i < S1.size() + 1; i++)
        V[i] = tmp;

    for (int i = 0; i < S1.size(); i++)
        for (int j = 0; j < S2.size(); j++)
            if (S1[i] == S2[j])
                V[i + 1][j + 1] = V[i][j] + 1;
            else
                V[i + 1][j + 1] = std::max(V[i + 1][j], V[i][j + 1]);

    std::string LCS = "";

    int r = S1.size(), c = S2.size();

    //for (auto& K : V)
    //{
    //    for (auto& L : K)
    //        std::cout << L << ' ';
    //    std::cout << '\n';
    //}

    if (V[S1.size()][S2.size()] == 0)
    {
        std::cout << 0;
        return 0;
    }

    while (V[r][c])
    {
        while (V[r][c] == V[r][c - 1])
            c--;
        while (V[r][c] == V[r - 1][c])
            r--;

        LCS += S2[c - 1];
        r--; c--;
    }

    std::reverse(LCS.begin(), LCS.end());

    std::cout << V[S1.size()][S2.size()] << '\n';
    std::cout << LCS;

    return 0;
}