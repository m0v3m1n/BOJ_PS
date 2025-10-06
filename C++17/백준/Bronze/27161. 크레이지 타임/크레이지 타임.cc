#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, written_time, time = 1;
    bool front = true;
    std::string clock_type;
    
    std::cin >> N;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> clock_type >> written_time;
        std::cout << time << ' ';

        if (clock_type == "HOURGLASS" && written_time == time)
            std::cout << "NO" << '\n';
        else if (clock_type == "HOURGLASS")
        {
            front = !front;
            std::cout << "NO" << '\n';
        }
        else if (written_time == time)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';

        if (front)
            if (time == 12)
                time = 1;
            else
                time++;
        else
            if (time == 1)
                time = 12;
            else
                time--;
    }

    return 0;
}