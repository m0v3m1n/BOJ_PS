#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int A, B, C;
    std::cin >> A >> B >> C;

    int arr[7];
    arr[0] = A;
    arr[1] = B;
    arr[2] = C;
    arr[3] = A * B;
    arr[4] = B * C;
    arr[5] = A * C;
    arr[6] = A * B * C;

    for(int i = 0; i < 7; i++)
        for (int j = 0; j < 6; j++)
            if (arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }

    for (auto& K : arr)
        if (K % 2) // 홀수면
        {
            std::cout << K;
            return 0;
        }

    std::cout << arr[0];
    return 0;
}