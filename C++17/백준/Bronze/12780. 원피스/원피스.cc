#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int count = 0;
    std::string H, S;
    std::cin >> H >> S;
    
    for (int i = 0; i < H.length() - S.length() + 1; i++)
    {
        bool flag = true;

        for (int j = 0; j < S.length(); j++)
            if (H[i + j] != S[j])
                flag = false;

        if (flag)
            count++;
    }

    std::cout << count;
    return 0;
}