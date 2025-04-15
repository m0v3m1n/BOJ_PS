#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::cin.ignore();

    while (N--)
    {
        int sharp = 0;
        int total = 0;

        std::string S;
        std::vector<std::string> V;

        while(1)
        {
            std::getline(std::cin, S);
            if (S == "")
                break;

            V.push_back(S);
        }

        for(int i = 0; i < V.size(); i++)
            for (int j = 0; j < V[i].length(); j++)
            {
                if (V[i][j] == '#')
                    sharp++;
                total++;
            }

        double percentage = 1000 * ((double)(total - sharp) / (double)(total)); // 98.17% --> 982.7
        percentage = std::ceil(percentage); // 983.0

        if ((int)percentage % 10 == 0) // 980.0, 990.0, etc.
            std::cout << "Efficiency ratio is " << (int)percentage / 10 << "%.\n";
        else
        {
            std::cout << std::fixed;
            std::cout.precision(1);

            percentage /= 10.0; // 98.30
            std::cout << "Efficiency ratio is " << percentage << "%.\n";
        }
    }
    return 0;
}
