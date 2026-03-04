#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    int a = (100 - N);
    int b = (100 - M);
    int c = 100 - (a + b);
    int d = a * b;
    int q = d / 100;
    int r = d % 100;

    int front = (c + q);
    int back = r;

    std::cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
    std::cout << front << ' ' << back;
    return 0;
}