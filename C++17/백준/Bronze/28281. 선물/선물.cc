#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, X, min = -1;
    std::cin >> N >> X;

    int* arr = new int[N] {0, };

    for (int i = 0; i < N; i++)
        std::cin >> arr[i];

    for (int i = 0; i < N - 1; i++)
    {
        if (i == 0)
            min = (arr[i] + arr[i + 1]) * X;
        else
            min = min < (arr[i] + arr[i + 1]) * X ? min : (arr[i] + arr[i + 1]) * X;
    }

    std::cout << min;

    delete[] arr;
    return 0;
}