#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T;
    std::cin >> T;

    while (T--)
    {
        long long a, b, c;
        std::cin >> a >> b >> c;

        long long first = (a * a) + ((b + c) * (b + c));
        long long second = (b * b) + ((a + c) * (a + c));
        long long third = (c * c) + ((a + b) * (a + b));

        std::cout << std::min({ first, second, third }) << '\n';
    }

    return 0;
}