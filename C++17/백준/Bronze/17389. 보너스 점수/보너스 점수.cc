#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, total = 0, bonus = 0; std::cin >> N;
    std::string S; std::cin >> S;

    for (int i = 1; i <= N; i++)
    {
        if (S[i - 1] == 'O')
        {
            total += (i + bonus);
            bonus++;
        }
        else
            bonus = 0;
    }

    std::cout << total;
    return 0;
}
