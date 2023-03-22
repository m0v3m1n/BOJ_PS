// 백준 번호 1992번, 쿼드트리.
// 문제 링크 : https://www.acmicpc.net/problem/1992

#include <iostream>
#include <string>

char Black_White[64][64] = {}; // 최대 크기를 가정해 배열 선언.

int RecursionFunc(char Arr[64][64], int RStart, int REnd, int CStart, int CEnd)
{
    int BCount = 0;
    int WCount = 0; // 흰색, 하얀색 개수 변수.

    int RDiff = (REnd - RStart) / 2;
    int CDiff = (CEnd - CStart) / 2; // 구역 분할용 변수 선언.

    for (int R = RStart; R < REnd; R++)
    {
        for (int C = CStart; C < CEnd; C++)
        {
            if (Arr[R][C] == '0')
                WCount++;
            else
                BCount++;
        }
    } // 흰색과 검은색 개수 counting.

    if (WCount == (REnd - RStart) * (REnd - RStart))
    {
        std::cout << '0';
        return 0;
    }
    else if (BCount == (REnd - RStart) * (REnd - RStart))
    {
        std::cout << '1';
        return 1;
    } // 흰색이나 검은색으로만 꽉 차 있다면 0 혹은 1 출력.
    else // 섞여있다면 재귀 코드 on
    {
        std::cout << '('; // 재귀 코드 시작 == 분할이 된 것이므로 괄호 시작
        // 재귀 코드
        RecursionFunc(Arr, RStart, RStart + RDiff, CStart, CStart + CDiff); // 좌상단
        RecursionFunc(Arr, RStart, RStart + RDiff, CStart + CDiff, CEnd); // 우상단
        RecursionFunc(Arr, RStart + RDiff, REnd, CStart, CStart + CDiff); //좌하단
        RecursionFunc(Arr, RStart + RDiff, REnd, CStart + CDiff, CEnd); // 우하단

        std::cout << ')'; // 한 구역의 분할 및 출력이 종료됐다면 괄호 폐쇄.

        return 0;
    }
}

int main()
{
    int N;
    std::cin >> N;

    std::string S;

    for (int i = 0; i < N; i++)
    {
        std::cin >> S;

        for (int j = 0; j < N; j++)
        {
            Black_White[i][j] = S[j];
        }
    }

    RecursionFunc(Black_White, 0, N, 0, N);

    return 0;
}
