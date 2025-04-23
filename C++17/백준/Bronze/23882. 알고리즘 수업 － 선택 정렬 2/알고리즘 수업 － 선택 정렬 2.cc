#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K, cur_k = 0; std::cin >> N >> K;
    int* arr = new int[N];

    for (int i = 0; i < N; i++)
        std::cin >> arr[i];

    for (int i = N - 1; i >= 1; i--)
    {
        int max_idx = 0;

        for (int j = 0; j <= i; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;

        if (max_idx == i)
            continue;
        else
        {
            int tmp = arr[max_idx];
            arr[max_idx] = arr[i];
            arr[i] = tmp;

            cur_k++;

            if (cur_k == K)
            {
                for (int k = 0; k < N; k++)
                    std::cout << arr[k] << ' ';
                return 0;
            }
        }
    }

    if (cur_k < K)
        std::cout << -1;

    delete[] arr;
    return 0;
}
