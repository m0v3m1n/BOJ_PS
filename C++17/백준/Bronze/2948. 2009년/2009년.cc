#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int D, M; std::cin >> D >> M;
    if (M == 2)
        D += 31;
    else if (M == 3)
        D += 59;
    else if (M == 4)
        D += 90;
    else if (M == 5)
        D += 120;
    else if (M == 6)
        D += 151;
    else if (M == 7)
        D += 181;
    else if (M == 8)
        D += 212;
    else if (M == 9)
        D += 243;
    else if (M == 10)
        D += 273;
    else if (M == 11)
        D += 304;
    else if (M == 12)
        D += 334;

    if (D % 7 == 1)
        std::cout << "Thursday";
    else if (D % 7 == 2)
        std::cout << "Friday";
    else if (D % 7 == 3)
        std::cout << "Saturday";
    else if (D % 7 == 4)
        std::cout << "Sunday";
    else if (D % 7 == 5)
        std::cout << "Monday";
    else if (D % 7 == 6)
        std::cout << "Tuesday";
    else if (D % 7 == 0)
        std::cout << "Wednesday";

    return 0;
}