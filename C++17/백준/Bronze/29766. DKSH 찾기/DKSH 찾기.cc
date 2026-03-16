#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int ans = 0;
    std::string S;
    std::cin >> S;

    for (int i = 0; i + 3 < S.length(); i++)
        if (S.substr(i, 4) == "DKSH")
            ans++;

    std::cout << ans;
    return 0;
}