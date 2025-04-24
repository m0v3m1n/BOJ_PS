#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int alp['Z' - 'A' + 1] = { 3,2,1,2,3,3,3,3,1,1,3,1,3,3,1,2,2,2,1,2,1,1,2,2,2,1 };
    std::string S;
    std::vector<int> prev, cur;

    std::cin >> S;
    for (int i = 0; i < S.length(); i++)
        prev.push_back(alp[S[i] - 'A']);

    while (prev.size() != 1)
    {
        for (int i = 0; i < prev.size(); i += 2)
            if (i == prev.size() - 1)
                cur.push_back(prev[i]);
            else
                if (prev[i] + prev[i + 1] > 10)
                    cur.push_back((prev[i] + prev[i + 1]) % 10);
                else
                    cur.push_back(prev[i] + prev[i + 1]);

        prev = cur;
        cur.clear();
    }

    if (prev[0] % 2 == 1)
        std::cout << "I'm a winner!";
    else
        std::cout << "You're the winner?";

    return 0;
}
