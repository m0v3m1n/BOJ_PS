#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, a, b, c;
    std::cin >> N >> M;

    bool* lights = new bool[N];
    for (int i = 0; i < N; i++)
        std::cin >> lights[i];

    for (int j = 0; j < M; j++)
    {
        std::cin >> a >> b >> c;

        if (a == 1)
            lights[b - 1] = c;
        else if (a == 2)
            for (int k = b; k <= c; k++)
                lights[k - 1] = !lights[k - 1];
        else if (a == 3)
            for (int k = b; k <= c; k++)
                lights[k - 1] = 0;
        else
            for (int k = b; k <= c; k++)
                lights[k - 1] = 1;
    }

    for (int i = 0; i < N; i++)
        std::cout << lights[i] << ' ';
}