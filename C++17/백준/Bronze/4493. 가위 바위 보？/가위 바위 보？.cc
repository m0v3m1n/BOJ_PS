#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int T; std::cin >> T;
    while (T--)
    {
        char l, r;
        int N, left = 0, right = 0;
        
        std::cin >> N;
        for (int i = 0; i < N; i++)
        {
            std::cin >> l >> r;
            if (l == 'R')
                if (r == 'R')
                    continue;
                else if (r == 'S')
                    left++;
                else
                    right++;
            else if (l == 'S')
                if (r == 'R')
                    right++;
                else if (r == 'S')
                    continue;
                else
                    left++;
            else
                if (r == 'R')
                    left++;
                else if (r == 'S')
                    right++;
                else
                    continue;
        }
        if (left > right)
            std::cout << "Player 1" << '\n';
        else if (left == right)
            std::cout << "TIE" << '\n';
        else
            std::cout << "Player 2" << '\n';
    }
}
