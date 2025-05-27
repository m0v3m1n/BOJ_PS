#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, fridge, b;
    std::string B;
    
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        fridge = 0;
        b = 1;

        std::cin >> B;
        for (int j = B.length() - 1; j >= 0; j--)
        {
            if (B[j] == '1')
                fridge += b;
            b *= 2;
        }

        std::cout << fridge << '\n';
    }
}
