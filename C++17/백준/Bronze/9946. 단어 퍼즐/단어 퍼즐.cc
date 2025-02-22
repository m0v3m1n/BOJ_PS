#include <iostream>
#include <string>

int main()
{
    int th = 1;
    bool flag = true;
    std::string A, B;

    while (1)
    {
        flag = true;
        std::cin >> A >> B;

        if (A == B && A == "END")
            break;

        int alp_a[26] = { 0, };
        int alp_b[26] = { 0, };

        for (auto& K : A)
            alp_a[K - 'a']++;

        for (auto& K : B)
            alp_b[K - 'a']++;

        for (int i = 0; i < 26; i++)
            if (alp_a[i] != alp_b[i])
                flag = false;

        if(flag)
            std::cout << "Case " << th << ": same\n";
        else
            std::cout << "Case " << th << ": different\n";

        th++;
    }

    return 0;
}