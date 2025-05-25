#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, max = 0, tmp_cover;
    int covering[1001] = { 0, };

    std::cin >> N;
    std::pair<int, int> *cow = new std::pair<int, int>[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> cow[i].first >> cow[i].second;
        for (int j = cow[i].first; j < cow[i].second; j++)
            covering[j]++;
    }

    for (int i = 0; i < N; i++)
    {
        tmp_cover = 0;

        for (int j = cow[i].first; j < cow[i].second; j++)
            covering[j]--;

        for (int j = 1; j < 1000; j++)
            if (covering[j])
                tmp_cover++;

        for (int j = cow[i].first; j < cow[i].second; j++)
            covering[j]++;

        if (tmp_cover > max)
            max = tmp_cover;
    }

    std::cout << max;
}
