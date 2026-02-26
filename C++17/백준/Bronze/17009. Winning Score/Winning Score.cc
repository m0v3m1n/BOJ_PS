#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A = 0, B = 0, tmp;

    for (int i = 3; i > 0; i--)
    {
        std::cin >> tmp;
        A += i * tmp;
    }

    for (int i = 3; i > 0; i--)
    {
        std::cin >> tmp;
        B += i * tmp;
    }

    if (A > B)
        std::cout << 'A';
    else if (A == B)
        std::cout << 'T';
    else
        std::cout << 'B';

    return 0;
}