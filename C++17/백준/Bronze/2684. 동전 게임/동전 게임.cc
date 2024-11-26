#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::string coin[8] = { "TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH" };
    int P; std::cin >> P;

    while (P--)
    {
        int coin_arr[8] = { 0, };
        std::string coins; std::cin >> coins;

        for (int i = 0; i <= 40 - 3; i++)
        {
            std::string tmp = coins.substr(i, 3);

            for (int j = 0; j < 8; j++)
                if (tmp == coin[j])
                {
                    coin_arr[j]++;
                    break;
                }
        }

        for (auto& K : coin_arr)
            std::cout << K << ' ';
        std::cout << '\n';
    }
}