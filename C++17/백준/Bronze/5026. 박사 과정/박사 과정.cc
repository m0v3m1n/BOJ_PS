#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N;
    bool flag = true;
    std::string input, a, b;

    std::cin >> N;
    while (N--)
    {
        std::cin >> input;
        if (input == "P=NP")
            std::cout << "skipped" << '\n';
        else
        {
            a = ""; b = "";
            for (int i = 0; i < input.length(); i++)
            {
                if (flag)
                    a += input[i];
                else
                    b += input[i];

                if (input[i] == '+')
                    flag = false;
            }

            std::cout << std::stoi(a) + std::stoi(b) << '\n';
            flag = true;
        }
    }
    return 0;
}
