#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    int s1, s2, ans, out, sample = 0, system = 0;
    std::cin >> s1 >> s2;

    while (s1--)
    {
        std::cin >> ans >> out;
        if (ans != out)
            sample++;
    }

    while (s2--)
    {
        std::cin >> ans >> out;
        if (ans != out)
            system++;
    }

    if (!sample && !system)
        std::cout << "Accepted";
    else if (sample)
        std::cout << "Wrong Answer";
    else
        std::cout << "Why Wrong!!!";

    return 0;
}