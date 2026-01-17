#include <iostream>
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, P, forSale = 0, notCream, bread;
    std::cin >> N >> K >> P;

    for (int i = 0; i < N; i++)
    {
        notCream = 0;

        for (int j = 0; j < K; j++)
        {
            std::cin >> bread;
            if (!bread)
                notCream++;
        }

        if (notCream < P)
            forSale++;
    }

    std::cout << forSale;
    return 0;
}