#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long N, stick = 0, sum = 0;
    std::cin >> N;

    long long* arr = new long long[N];
    for (long long i = 0; i < N; i++)
    {
        std::cin >> arr[i];
        stick += arr[i];
    }

    std::sort(arr, arr + N);

    //for (int i = 0; i < N; i++)
    //    std::cout << arr[i] << ' ';

    for (long long i = 0; i < N - 1; i++)
    {
        stick -= arr[i];
        sum += (arr[i] * stick);
    }

    std::cout << sum;

    delete[] arr;
    return 0;
}