#include <iostream>

bool RSP(char a, char b)
{
    if (a == 'R' && b == 'S') return true;
    if (a == 'S' && b == 'P') return true;
    if (a == 'P' && b == 'R') return true;
    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    char ML, MR, TL, TR;
    std::cin >> ML >> MR >> TL >> TR;

    if ((RSP(ML, TL) && RSP(ML, TR)) || (RSP(MR, TL) && RSP(MR, TR)))
        std::cout << "MS";
    else if ((RSP(TL, ML) && RSP(TL, MR)) || (RSP(TR, ML) && RSP(TR, MR)))
        std::cout << "TK";
    else
        std::cout << "?";

    return 0;
}