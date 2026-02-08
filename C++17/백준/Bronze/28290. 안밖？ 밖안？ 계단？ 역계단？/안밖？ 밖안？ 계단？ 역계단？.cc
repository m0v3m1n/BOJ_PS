#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    std::string S;
    std::cin >> S;

    if (S == "fdsajkl;" || S == "jkl;fdsa")
        std::cout << "in-out";
    else if (S == "asdf;lkj" || S == ";lkjasdf")
        std::cout << "out-in";
    else if (S == "asdfjkl;")
        std::cout << "stairs";
    else if (S == ";lkjfdsa")
        std::cout << "reverse";
    else
        std::cout << "molu";

    return 0;
}