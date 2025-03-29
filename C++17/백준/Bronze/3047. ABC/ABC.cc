#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int arr[3];
    for (int i = 0; i < 3; i++)
        std::cin >> arr[i];

    for(int i = 0; i < 2; i++)
        for(int j = i + 1; j < 3; j++)
            if (arr[i] > arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }

    char abc[4];
    std::cin >> abc;

    for (int i = 0; i < 3; i++)
        std::cout << arr[abc[i] - 'A'] << ' ';

    return 0;
}