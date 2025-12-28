#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, P;

    while (1)
    {
        std::cin >> N;
        if (N == 0)
            break;
        std::cin >> P;

        std::vector<int> pages;

        pages.push_back(P % 2 ? P + 1 : P - 1);
        pages.push_back(P % 2 ? N - P : N - P + 1);
        pages.push_back(P % 2 ? N - P + 1 : N - P + 2);

        std::sort(pages.begin(), pages.end());

        for (auto& K : pages) {
            std::cout << K << ' ';
        }
        std::cout << '\n';

    }

    return 0;
}