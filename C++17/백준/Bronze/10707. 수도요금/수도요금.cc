#include <iostream>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B, C, D, P;
    std::cin >> A >> B >> C >> D >> P;
    // A : X의 리터당 가격
    // B : Y의 기본 요금, C는 상한, D는 리터당 추가요금
    // P : 사용한 기름

    int X = A * P;
    int Y = B;
    if (P - C > 0)
        Y += (P - C) * D;

    std::cout << (X < Y ? X : Y);
    return 0;
}