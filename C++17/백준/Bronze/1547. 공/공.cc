#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int cup[4];
    for (int i = 0; i < 4; i++)
        cup[i] = i;

    int N, X, Y, tmp;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> X >> Y;

        tmp = cup[X];
        cup[X] = cup[Y];
        cup[Y] = tmp;
        
    }

    for (int i = 1; i <= 3; i++)
        if (cup[i] == 1)
            std::cout << i;

    return 0;
}