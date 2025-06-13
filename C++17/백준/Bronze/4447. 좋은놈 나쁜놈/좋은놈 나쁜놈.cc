#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, g, b;
    std::string S;
    
    std::cin >> N; std::cin.ignore();

    while (N--)
    {
        g = 0, b = 0;
        std::getline(std::cin, S);

        for (int i = 0; i < S.length(); i++)
            if (S[i] == 'g' || S[i] == 'G')
                g++;
            else if (S[i] == 'b' || S[i] == 'B')
                b++;

        std::cout << S;
        if (g > b)
            std::cout << " is GOOD" << '\n';
        else if (g == b)
            std::cout << " is NEUTRAL" << '\n';
        else
            std::cout << " is A BADDY" << '\n';
    }

    return 0;
}