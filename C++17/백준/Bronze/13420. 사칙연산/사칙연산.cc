#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    long long T, a, b, c;
    char op1, op2;

    std::cin >> T;
    while (T--)
    {
        std::cin >> a >> op1 >> b >> op2 >> c;
        if (op1 == '+')
            if (a + b == c)
                std::cout << "correct" << '\n';
            else
                std::cout << "wrong answer" << '\n';
        else if (op1 == '-')
            if(a - b == c)
                std::cout << "correct" << '\n';
            else
                std::cout << "wrong answer" << '\n';
        else if (op1 == '*')
            if(a * b == c)
                std::cout << "correct" << '\n';
            else
                std::cout << "wrong answer" << '\n';
        else if (op1 == '/')
            if(a / b == c)
                std::cout << "correct" << '\n';
            else
                std::cout << "wrong answer" << '\n';
    }
}
