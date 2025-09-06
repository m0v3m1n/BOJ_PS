#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, a = 0, b = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        char c;
        std::cin >> c;

        if (c == 'D')
            a++;
        else
            b++;

        if (abs(a - b) > 1)
            break;
    }

    std::cout << a << ":" << b;
    return 0;
}