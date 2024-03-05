#include <iostream>
#include <vector>

void switching(std::vector<int>& V, int a, int b)
{
    int tmp;

    if (V[a] > V[b])
    {
        tmp = V[a];
        V[a] = V[b];
        V[b] = tmp;

        for (auto& K : V)
            std::cout << K << ' ';
        std::cout << '\n';
    }
}

bool check(std::vector<int>& V)
{
    bool flag = false;

    for (int i = 0; i < 5; i++)
    {
        if (V[i] == i + 1)
            continue;
        else
            flag = true;
    }

    return flag;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int tmp;
    bool flag = true;
    std::vector<int> V;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> tmp;
        V.push_back(tmp);
    }

    while (flag)
    {
        for (int i = 0; i < 4; i++)
            switching(V, i, i + 1);

        flag = check(V);
    }

    return 0;
}