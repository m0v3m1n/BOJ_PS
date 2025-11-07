#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::string name;
    std::map<std::string, int> M;

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> name;

        if (M.find(name) != M.end())
            M[name]++;
        else
            M.insert({ name, 1 });
    }

    for (int i = 0; i < N - 1; i++)
    {
        std::cin >> name;
        M[name]--; // 1이면 0 됨 --> M[name]은 false
    }

    for (auto& K : M)
        if (K.second) // 1 이상이면? --> 완주 못했다는 뜻
            std::cout << K.first;

    return 0;
}