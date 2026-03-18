#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    while (1)
    {
        int min = 0, max = 11, tmp;
        std::string S;

        while (1)
        {
            std::cin >> tmp;
            std::cin.ignore();

            if (tmp)
                std::getline(std::cin, S);

            if (tmp == 0)
                break;

            bool flag = false;

            if (S == "too high")
                max = max < tmp ? max : tmp;
            else if (S == "too low")
                min = min > tmp ? min : tmp;
            else // right on
                flag = true;

            if (flag)
                break;
        }

        if (tmp == 0)
            break;

        if (tmp >= max || tmp <= min)
            std::cout << "Stan is dishonest" << '\n';
        else
            std::cout << "Stan may be honest" << '\n';
    }

    return 0;
}