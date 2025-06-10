#include <iostream>

int fingerGraph[6][6], n;

bool isPricked(int start)
{
    for (int i = 1; i <= 5; i++)
        if (fingerGraph[start][i]) return false;
    return true;
}

int main()
{
    std::cin >> n;

    for (int i = 0, a, b; i < n; i++)
    {
        std::cin >> a >> b;
        fingerGraph[a][b] = 1;
    }

    if (
        (fingerGraph[1][3] || fingerGraph[3][1]) && //엄지 중지
        (fingerGraph[1][4] || fingerGraph[4][1]) && //엄지 약지
        (fingerGraph[3][4] || fingerGraph[4][3]) && //중지 약지
        isPricked(2) && isPricked(5)
        )
        std::cout << "Wa-pa-pa-pa-pa-pa-pow!";
    else
        std::cout << "Woof-meow-tweet-squeek";
}