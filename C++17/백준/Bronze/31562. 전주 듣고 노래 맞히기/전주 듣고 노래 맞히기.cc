#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, T;
    char m;
    std::string S, tmp_m, tmp_name;
    std::vector<std::pair<std::string, std::string>> song;

    std::cin >> N >> M;

    while (N--)
    {
        std::cin >> T >> S;

        for (int i = 0; i < 7; i++)
        {
            std::cin >> m;

            if(i < 3)
                tmp_m.push_back(m);
        }

        song.push_back({ S, tmp_m });
        tmp_m.clear();
    }

    while (M--)
    {
        int count = 0;
        tmp_name.clear();
        tmp_m.clear();

        for (int i = 0; i < 3; i++)
        {
            std::cin >> m;
            tmp_m.push_back(m);
        }
        
        for (int i = 0; i < song.size(); i++)
        {
            if (song[i].second == tmp_m)
            {
                count++;
                tmp_name = song[i].first;
            }
        }

        if (count == 0)
            std::cout << "!" << '\n';
        else if (count >= 2)
            std::cout << "?" << '\n';
        else
            std::cout << tmp_name << '\n';
    }

    return 0;
}
