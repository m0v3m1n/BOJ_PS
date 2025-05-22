#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, total = 0;
    char K;
    
    std::cin >> N >> K;
    std::string S;

    for(int i = 0; i <= N; i++)
        for(int m = 0; m < 60; m++)
            for (int s = 0; s < 60; s++)
            {
                if (i < 10)
                    S += '0';
                S += std::to_string(i);

                if (m < 10)
                    S += '0';
                S += std::to_string(m);

                if (s < 10)
                    S += '0';
                S += std::to_string(s);

                if (S.find(K) != std::string::npos) // Found
                    total++;
                S.clear();
            }
    std::cout << total;
}
