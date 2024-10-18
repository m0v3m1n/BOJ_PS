#include <iostream>
#include <algorithm>

int n, m;

int arr[10];
int num[10];

void rec(int x, int len)
{
    if (len == m)
    {
        for (int i = 0; i < m; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';

        return;
    }

    for (int i = x; i < n; i++)
    {
        arr[len] = num[i];
        rec(i, len + 1);
    }

    return;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::cin >> n >> m;

    for (int i = 0; i < n; i++)
        std::cin >> num[i];

    std::sort(num, num + n);
    rec(0, 0);

    return 0;
}