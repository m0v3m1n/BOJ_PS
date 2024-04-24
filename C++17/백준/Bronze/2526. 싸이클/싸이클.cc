#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, P, n_modula, count = 0;
    std::cin >> N >> P;
    std::map<int, int> M;

    M.insert({ N, 1 });
    n_modula = N;

    while (1)
    {
        n_modula *= N;
        n_modula %= P;

        if (M.find(n_modula) == M.end())
            M.insert({ n_modula, 1 });
        else if (M[n_modula] == 1)
            M[n_modula] = 2;
        else
            break;
    }

    for (auto& K : M)
        if (K.second == 2)
            count++;

    std::cout << count;
    return 0;
}