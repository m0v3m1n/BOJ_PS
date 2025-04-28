#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, count = 0; std::cin >> N;
    for (int i = 1; i <= N; i++)
    {
        std::string S = std::to_string(i);

        for (int j = 0; j < S.length(); j++)
            if (S[j] == '3' || S[j] == '6' || S[j] == '9')
                count++;
    }

    std::cout << count;
    return 0;
}
