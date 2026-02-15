#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, U, L;
    std::cin >> N >> U >> L;

    if (N >= 1000)
        if (U >= 8000 || L >= 260)
            std::cout << "Very Good";
        else
            std::cout << "Good";
    else
        std::cout << "Bad";

    return 0;
}