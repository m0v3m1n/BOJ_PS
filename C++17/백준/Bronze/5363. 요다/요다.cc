#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::string S;
    
    std::cin >> N; std::cin.ignore();
    for(int i = 0; i < N; i++)
    {
        std::getline(std::cin, S);
        int idx = 0, space = 0;
        while (space < 2)
        {
            if (S[idx] == ' ')
                space++;
            idx++;
        }

        S += ' ';
        S += S.substr(0, idx - 1);
        S.erase(S.begin(), S.begin() + idx);

        std::cout << S << '\n';
    }
}
