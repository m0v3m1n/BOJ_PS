#include <iostream>
#include <vector>
#include <cmath>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;
    while (T--)
    {
        std::string S; std::cin >> S;
        int sl = S.length();
        int ssl = std::sqrt(sl);

        std::vector<std::string> box(ssl);

        for (int i = 0; i < sl; i++)
            box[i / ssl] += S[i];

        for (int i = ssl - 1; i >= 0; i--)
            for (int j = 0; j < ssl; j++)
                std::cout << box[j][i];

        std::cout << '\n';
    }
}
