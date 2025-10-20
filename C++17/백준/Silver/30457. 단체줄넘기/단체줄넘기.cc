#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, tmp, stu = 0; std::cin >> N;
    std::vector<int> V(1001, 0);

    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        if (V[tmp] < 2)
            V[tmp]++;
    }

    for (auto& K : V)
        stu += K;

    std::cout << stu;
    return 0;
}