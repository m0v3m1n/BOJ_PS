#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N; std::cin >> N;
    std::string base_9 = "";

    while (N)
    {
        int quotient = N / 9;
        int remainder = N % 9;
        
        base_9 += std::to_string(remainder);
        N = quotient;
    }

    std::reverse(base_9.begin(), base_9.end());
    std::cout << base_9;
    return 0;
}