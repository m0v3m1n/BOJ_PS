#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int A, B;
    int posA, posB;
    bool flag = false;

    bool map[6][6];
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            map[i][j] = false;

    int r_movement[8] = { 2,1,-1,-2,-2,-1,1,2 };
    int c_movement[8] = { 1,2,2,1,-1,-2,-2,-1 };

    std::string position[36];
    for (int i = 0; i < 36; i++)
        std::cin >> position[i];

    posA = position[0][0] - 'A'; posB = position[0][1] - '1';
    map[posA][posB] = true;
    // 초기 좌표 설정

    for (int i = 1; i < 36; i++)
    {
        A = position[i][0] - 'A'; B = position[i][1] - '1';
        // 이동했을 때의 좌표 설정
        flag = false;

        for (int j = 0; j < 8; j++)
        {
            if (posA + r_movement[j] == A && posB + c_movement[j] == B)
            {
                posA += r_movement[j];
                posB += c_movement[j];

                map[posA][posB] = true;
                flag = true;
                break;
            }
        }
        if (flag == false) break;
    }

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (map[i][j] == false)
            {
                std::cout << "Invalid";
                return 0;
            }

    for (int i = 0; i < 8; i++)
        if (posA + r_movement[i] == position[0][0] - 'A'
            && posB + c_movement[i] == position[0][1] - '1')
        {
            std::cout << "Valid";
            return 0;
        }

    std::cout << "Invalid";
    return 0;
}
