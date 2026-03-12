#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int N, M, a, b;
    std::cin >> N >> M;

    int* arr = new int[N] {0, };

    for (int i = 0; i < M; i++)
    {
        std::cin >> a >> b;
        arr[a - 1]++;
        arr[b - 1]++;
    }

    for (int i = 0; i < N; i++)
        std::cout << arr[i] << '\n';

    delete[] arr;
    return 0;
}