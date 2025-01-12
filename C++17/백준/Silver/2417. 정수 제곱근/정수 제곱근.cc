#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    unsigned long long N; std::cin >> N;
    unsigned long long sq = std::sqrt(N);

    while (sq * sq < N)
        sq++;

    std::cout << sq;
}
