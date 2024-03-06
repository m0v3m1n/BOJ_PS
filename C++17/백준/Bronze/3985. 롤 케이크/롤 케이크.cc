#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int L, N, left, right;
    int max = 0, max_people;
    std::cin >> L >> N;

    std::vector<bool> cake(L + 1, false);
    std::vector<int> people(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        std::cin >> left >> right;
        int length = (right - left) + 1;

        if (length > max)
        {
            max = length;
            max_people = i;
        }

        for (int j = left; j <= right; j++)
        {
            if (cake[j] == false)
            {
                cake[j] = true;
                people[i]++;
            }
        }
    }

    std::cout << max_people << '\n';
    max = 0;

    for (int i = 1; i <= N; i++)
    {
        if (people[i] > max)
        {
            max_people = i;
            max = people[i];
        }
    }

    std::cout << max_people;
    return 0;
}