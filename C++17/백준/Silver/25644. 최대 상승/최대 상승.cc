#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, max = 0, benefit = 0; std::cin >> N;

    std::vector<int> price(N);

    for (int i = 0; i < N; i++)
        std::cin >> price[i];

    for (int i = N - 1; i >= 0; i--)
    {
        if (price[i] > max)
            max = price[i];
        
        benefit = (max - price[i] > benefit ? max - price[i] : benefit);
    }

    std::cout << benefit;
    return 0;
}