#include <iostream>

struct ddakji
{
    int star = 0;
    int circle = 0;
    int square = 0;
    int triangle = 0;
};

void check(ddakji A, ddakji B)
{
    if (A.star == B.star)
        if (A.circle == B.circle)
            if (A.square == B.square)
                if (A.triangle == B.triangle)
                    std::cout << 'D' << '\n';
                else
                    std::cout << (A.triangle > B.triangle ? 'A' : 'B') << '\n';
            else
                std::cout << (A.square > B.square ? 'A' : 'B') << '\n';
        else
            std::cout << (A.circle > B.circle ? 'A' : 'B') << '\n';
    else
        std::cout << (A.star > B.star ? 'A' : 'B') << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, input_ea, input_shape;
    std::cin >> N;

    while (N--) 
    {
        ddakji A, B;

        std::cin >> input_ea; // A 입력
        for (int i = 0; i < input_ea; i++)
        {
            std::cin >> input_shape;
            switch (input_shape)
            {
                case 4:
                    A.star++;
                    break;
                case 3:
                    A.circle++;
                    break;
                case 2:
                    A.square++;
                    break;
                case 1:
                    A.triangle++;
                    break;
            }
        }

        std::cin >> input_ea; // B 입력
        for (int i = 0; i < input_ea; i++)
        {
            std::cin >> input_shape;
            switch (input_shape)
            {
            case 4:
                B.star++;
                break;
            case 3:
                B.circle++;
                break;
            case 2:
                B.square++;
                break;
            case 1:
                B.triangle++;
                break;
            }
        }

        check(A, B);
    }
    return 0;
}