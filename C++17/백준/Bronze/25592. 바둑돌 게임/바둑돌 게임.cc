#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool turn = true;
    int N, stones = 1; std::cin >> N;

    while (1)
    {
        if (turn && N - stones < 0)
        {
            std::cout << stones - N;
            return 0;
        }
        else if (!turn && N - stones < 0)
        {
            std::cout << 0;
            return 0;
        }
        else // turn && N - stones >= 0 || !turn && N - stones >= 0
        {
            turn = !turn;
            N -= stones;
            stones += 1;
        }
    }

    return 0;
}