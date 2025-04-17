#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;
    while (T--)
    {
        int HP, MP, attack, defence, itemHP, itemMP, itemattack, itemdefence;
        std::cin >> HP >> MP >> attack >> defence >> itemHP >> itemMP >> itemattack >> itemdefence;

        HP += itemHP; if (HP < 1) HP = 1;
        MP += itemMP; if (MP < 1) MP = 1;
        attack += itemattack; if (attack < 0) attack = 0;
        defence += itemdefence;

        std::cout << HP + (5 * MP) + (2 * attack) + (2 * defence) << '\n';
    }
}
