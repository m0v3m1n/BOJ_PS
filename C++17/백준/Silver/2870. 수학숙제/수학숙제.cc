#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool cmp(std::string a, std::string b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    bool flag = false;
    std::string S;
    std::string ll;

    std::vector<std::string> V;

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> S;

        flag = false;
        ll = "";

        for (int j = 0; j < S.length(); j++)
        {
            if (S[j] >= 'a' && S[j] <= 'z')
                if (flag)
                {
                    V.push_back(ll);
                    ll = "";
                    flag = false;
                }
                else
                    continue;
            else
            {
                ll += S[j];
                flag = true;
            }
        }
        if (flag)
            V.push_back(ll);
    }

    for (int i = 0; i < V.size(); i++)
    {
        while(V[i][0] == '0' && V[i].size() > 1)
            V[i].erase(0, 1);
    }

    std::sort(V.begin(), V.end(), cmp);
    for (auto& K : V)
        std::cout << K << '\n';
    return 0;
}