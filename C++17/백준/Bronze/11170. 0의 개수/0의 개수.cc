#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T, start, end, count;
    std::cin >> T;

    while (T--)
    {
        count = 0;
        std::cin >> start >> end;

        for (int i = start; i <= end; i++)
        {
            if (i == 0)
            {
                count++;
                continue;
            }

            int tmp = i;

            while (tmp / 10 != 0) // 현재 값이 10보다 클 때
            {
                if (tmp % 10 == 0) // 나머지가 0 ==> 나누어떨어짐 ==> 10의 배수
                    count++; // 0의 개수 추가

                tmp /= 10; // 10의 배수 아니여도 일단 10으로 나누기
            }
                
        }
        std::cout << count << '\n';
    }
    return 0;
}