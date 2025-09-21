#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int problems = 0;
    std::string S;

    std::getline(std::cin, S); // 고무오리 디버깅 시작
    while (1)
    {
        std::getline(std::cin, S);

        if (S == "고무오리 디버깅 끝")
            break;
        else if (S == "문제")
            problems++;
        else if (problems) // 고무오리 & 문제 존재
            problems--;
        else // 고무오리 & 문제 미존재
            problems += 2;
    }

    if (problems)
        std::cout << "힝구";
    else
        std::cout << "고무오리야 사랑해";

    return 0;
}