#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = true;
    int prev, cur = -9999999;
    std::cin >> prev;

    while (!std::cin.eof())
    {
        std::cin >> cur;

        if (cur >= prev)
            prev = cur;
        else
        {
            flag = false;
            break;
        }
    }

    if (cur == -9999999)
        std::cout << "Good";
    else if (flag)
        std::cout << "Good";
    else
        std::cout << "Bad";
}
