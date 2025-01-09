#include <iostream>
#include <string>

int main(void)
{
    int n;
    std::cin >> n;

    int kbs1_idx, kbs2_idx;
    for (int i = 0; i < n; i++)
    {
        std::string ch;
        std::cin >> ch;

        if (ch == "KBS1") kbs1_idx = i;
        if (ch == "KBS2") kbs2_idx = i;
    }

    if (kbs1_idx > kbs2_idx)
        kbs2_idx++;

    for (int i = 0; i < kbs1_idx; i++)
        std::cout << '1';
    for (int i = 0; i < kbs1_idx; i++)
        std::cout << '4';

    if (kbs2_idx != 1)
    {
        for (int i = 0; i < kbs2_idx; i++)
            std::cout << '1';
        for (int i = 1; i < kbs2_idx; i++)
            std::cout << '4';
    }

    return 0;
}
