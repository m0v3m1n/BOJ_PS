#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long T, A, N;
    std::cin >> T;

    while (T--)
    {
        std::vector<long long> V;
        std::cin >> A >> N;

        bool flag = true;

        while (A)
        {
            V.push_back(A % N);
            A /= N;
        }

        for (int i = 0; i < V.size() / 2; i++)
            if (V[i] != V[V.size() - 1 - i])
                flag = false;

        std::cout << (flag ? 1 : 0) << '\n';
    }

    return 0;
}