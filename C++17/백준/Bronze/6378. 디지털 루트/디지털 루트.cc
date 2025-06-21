#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    while (1)
    {
        int sum = 10;
        std::cin >> S;

        if (S == "0")
            break;

        while (sum >= 10)
        {
            sum = 0;
            for (auto& K : S)
                sum += (K - '0');
            S = std::to_string(sum);
        }
        std::cout << sum << '\n';
    }
}