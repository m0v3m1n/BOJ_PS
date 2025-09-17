#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int R, C, A, B;
    std::cin >> R >> C >> A >> B;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < A; j++)
        {
            for (int k = 0; k < C; k++)
                for (int l = 0; l < B; l++)
                    if (i % 2)
                        if (k % 2)
                            std::cout << "X";
                        else
                            std::cout << ".";
                    else
                        if (k % 2)
                            std::cout << ".";
                        else
                            std::cout << "X";

            std::cout << '\n';
        }

                            

    return 0;
}