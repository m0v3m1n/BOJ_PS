#include <iostream>

const int MAX_N = 105;
char arr[MAX_N][MAX_N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin >> s;
    int n = s.size();

    std::pair<int, int> result = { 1, n };

    for (int r = 2; r <= n; ++r)
    {
        if (n % r == 0)
        {
            int c = n / r;

            if (r > c)
                break;

            result = { r, c };
        }
    }

    int idx = 0;
    int r = result.first, c = result.second;

    for (int j = 0; j < c; j++)
        for (int i = 0; i < r; i++)
            arr[j][i] = s[idx++];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            std::cout << arr[j][i];

    return 0;
}