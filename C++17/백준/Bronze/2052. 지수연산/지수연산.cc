#include <iostream>
#include <cmath>

int main()
{
    int N;
    double ans;

    std::cin >> N;
    ans = std::pow(0.5, N);

    std::printf("%.*f\n", N, ans);
    return 0;
}
