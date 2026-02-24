#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b, c;
    char o1, o2;

    std::cin >> a >> o1 >> b >> o2 >> c;
    if (a + b == c)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}