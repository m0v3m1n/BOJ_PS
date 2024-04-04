#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int x, y, z, max = 0, n, sum = 0, big = 0;
    std::vector<int> V;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y >> z;
        if (x == y && x == z && y == z)
            V.push_back(10000 + x * 1000);
        else if (x == y || x == z)
            V.push_back(1000 + x * 100);
        else if (y == z)
            V.push_back(1000 + z * 100);
        else
        {
            if (x > y && x > z)
                max = x;
            else if (y > x && y > z)
                max = y;
            else if (z > x && z > y)
                max = z;
            V.push_back(max * 100);
        }
    }
    std::sort(V.begin(), V.end());
    std::cout << V[n - 1];

    return 0;
}