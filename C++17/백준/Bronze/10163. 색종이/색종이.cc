#include <iostream>

int map[1002][1002];
int arr[101];

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int N;
    int r, c, h, w;

    std::cin >> N;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> c >> r >> w >> h;

        for (int j = c; j < c + w; j++)
            for (int k = r; k < r + h; k++)
                map[j][k] = i;
    }

    for (int i = 0; i < 1002; i++)
        for (int j = 0; j < 1002; j++)
            arr[map[i][j]]++;

    for (int i = 1; i <= N; i++)
        std::cout << arr[i] << '\n';

    return 0;
}