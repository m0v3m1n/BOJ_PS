#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long A, B, C, res;
    int arr[10] = { 0, };
    std::string S;

    std::cin >> A >> B >> C;
    res = A * B * C;

    while (res)
    {
        arr[res % 10]++;
        res /= 10;
    }

    for (auto& K : arr)
        std::cout << K << '\n';
    return 0;
}