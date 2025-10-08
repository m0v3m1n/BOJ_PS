#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, a, count = 0; 
    bool b;

    std::cin >> N;
    std::vector<bool> V(200001, false);

    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        if (V[a] == b)
            count++;
        V[a] = b;
    }

    for (int i = 0; i < 200001; i++)
        if (V[i])
            count++;

    std::cout << count;
    return 0;
}