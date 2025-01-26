#include <iostream>
#include <vector>
#include <string>

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int r, c; std::cin >> r >> c;
        std::vector<std::string> boolpan(r);

        for (int i = 0; i < r; i++)
            std::cin >> boolpan[i];

        for (auto& K : boolpan)
        {
            for (int i = K.length() - 1; i >= 0; i--)
                std::cout << K[i];
            std::cout << '\n';
        }
    }
    return 0;
}
