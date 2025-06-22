#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, dist; 
    std::string a, b;

    std::cin >> N;
    while (N--)
    {
        dist = 0;
        std::cin >> a >> b;

        for (int i = 0; i < a.length(); i++)
            if (a[i] != b[i])
                dist++;

        std::cout << "Hamming distance is " << dist << "." << '\n';
    }

    return 0;
}