#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, T, BD;
    int bd = -1, b = 0, d = 0, n = 1;
    std::cin >> A >> T >> BD;

    while (1)
    {
        b++;
        bd++; if (bd == A) bd = 0;
        if (BD == 0 && b == T)
        {
            std::cout << bd;
            return 0;
        }

        d++;
        bd++; if (bd == A) bd = 0;
        if (BD == 1 && d == T)
        {
            std::cout << bd;
            return 0;
        }

        b++; 
        bd++; if (bd == A) bd = 0;
        if (BD == 0 && b == T)
        {
            std::cout << bd;
            return 0;
        }

        d++; 
        bd++; if (bd == A) bd = 0;
        if (BD == 1 && d == T)
        {
            std::cout << bd;
            return 0;
        }

        for (int i = 0; i <= n; i++)
        {
            b++;
            bd++; if (bd == A) bd = 0;
            if (BD == 0 && b == T)
            {
                std::cout << bd;
                return 0;
            }
        }

        for (int i = 0; i <= n; i++)
        {
            d++; 
            bd++; if (bd == A) bd = 0;
            if (BD == 1 && d == T)
            {
                std::cout << bd;
                return 0;
            }
        }
            
        n++;
    }

}
