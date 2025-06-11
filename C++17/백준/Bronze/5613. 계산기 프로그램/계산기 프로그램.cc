#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    std::cin >> N;

    while (1)
    {
        char op;
        std::cin >> op;

        if (op == '=')
            break;

        std::cin >> M;

        if (op == '+')
            N += M;
        else if (op == '-')
            N -= M;
        else if (op == '*')
            N *= M;
        else if (op == '/')
            N /= M;
    }

    std::cout << N;
    return 0;
}