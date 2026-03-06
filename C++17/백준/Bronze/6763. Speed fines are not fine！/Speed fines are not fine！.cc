#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    if (N >= M)
        std::cout << "Congratulations, you are within the speed limit!";
    else if (N + 20 >= M)
        std::cout << "You are speeding and your fine is $100.";
    else if(N + 30 >= M)
        std::cout << "You are speeding and your fine is $270.";
    else
        std::cout << "You are speeding and your fine is $500.";
    return 0;
}