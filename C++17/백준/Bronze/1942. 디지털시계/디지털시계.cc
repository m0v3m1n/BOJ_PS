#include <iostream>
#include <string>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        std::string i1, i2;
        std::cin >> i1 >> i2;

        int h1, h2, m1, m2, s1, s2, sum = 0;

        h1 = std::stoi(i1.substr(0, 2));
        m1 = std::stoi(i1.substr(3, 2));
        s1 = std::stoi(i1.substr(6, 2));

        h2 = std::stoi(i2.substr(0, 2));
        m2 = std::stoi(i2.substr(3, 2));
        s2 = std::stoi(i2.substr(6, 2));

        while (!(h1 == h2 && m1 == m2 && s1 == s2))
        {
            if ((h1 * 10000 + m1 * 100 + s1) % 3 == 0)
                sum++;

            s1++;

            if (s1 == 60)
            {
                s1 = 0;
                m1++;
            }

            if (m1 == 60)
            {
                m1 = 0;
                h1++;
            }

            if (h1 == 24)
                h1 = 0;
        }
        
        if ((h1 * 10000 + m1 * 100 + s1) % 3 == 0)
            sum++;

        std::cout << sum << '\n';
    }

    return 0;
}