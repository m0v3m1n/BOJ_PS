#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::string a, b;
    std::cin >> n >> a >> b;

    if (!(n % 2))
        if (a == b)
            std::cout << "Deletion succeeded";
        else
            std::cout << "Deletion failed";
    else
    {
        for (int i = 0; i < a.length(); i++)
            if (a[i] == b[i])
            {
                std::cout << "Deletion failed";
                return 0;
            }
        std::cout << "Deletion succeeded";
    }

    return 0;
}
