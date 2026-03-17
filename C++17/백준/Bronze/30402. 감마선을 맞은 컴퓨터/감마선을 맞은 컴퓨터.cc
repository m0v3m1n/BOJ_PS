#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    char tmp;

    for(int i = 0; i < 15; i++)
        for (int j = 0; j < 15; j++)
        {
            std::cin >> tmp;

            if (tmp == 'w')
            {
                std::cout << "chunbae";
                return 0;
            }
            else if (tmp == 'b')
            {
                std::cout << "nabi";
                return 0;
            }
            else if (tmp == 'g')
            {
                std::cout << "yeongcheol";
                return 0;
            }
            else
                continue;
        }

    return 0;
}