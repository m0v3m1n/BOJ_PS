#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin >> T;

    while (T--)
    {
        int arr[5];

        for (int i = 0; i < 5; i++)
            std::cin >> arr[i];

        std::sort(arr, arr + 5);

        if (arr[3] - arr[1] >= 4)
            std::cout << "KIN" << '\n';
        else
            std::cout << arr[1] + arr[2] + arr[3] << '\n';
    }
    return 0;
}