#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    bool flag = true;
    std::string S, K, T = "";
    std::cin >> S >> K;

    for (auto& c : S)
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
            T.push_back(c);

    if (T.find(K) == std::string::npos)
        std::cout << 0;
    else
        std::cout << 1;

    return 0;
}