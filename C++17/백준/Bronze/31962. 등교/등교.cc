#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, X, s, a, total, time = -1;
    std::cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        std::cin >> s >> a;
        total = s + a;

        if (total <= X)
            time = time > s ? time : s;
    }

    std::cout << time;
    return 0;
}