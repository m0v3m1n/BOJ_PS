#include <iostream>
#include <string>
#include <set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::string S;

    std::set<std::string> s;

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> S;
        if (S.length() < 6)
            continue;
        else
        {
            if (S.substr(S.length() - 6, 6) == "Cheese")
                s.insert(S);
        }
    }

    //for (auto& K : s)
    //    std::cout << K << '\n';

    if (s.size() >= 4)
        std::cout << "yummy";
    else
        std::cout << "sad";
}
