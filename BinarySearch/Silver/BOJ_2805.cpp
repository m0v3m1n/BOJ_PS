// 백준 번호 2805번, 나무 자르기
// 문제 링크 : https://www.acmicpc.net/problem/2805

#include <iostream>
#include <algorithm>

bool compare(int a, int b) // 내림차순 compare 함수
{
    return a < b;
}

int TreeHeight[1000001] = {}; // 배열 크기가 큼 => 전역변수

long long BinarySearch(int Arr[], int ArrSize, int Height) // 이분탐색 함수 선언 및 정의
{
    long long Start = 0;
    long long End = Arr[ArrSize - 1];
    long long Mid = (Start + End) / 2; // End는 배열 중 가장 큰 값, Mid는 중간값으로 초기화.

    long long Sum = 0; // 자른 나무길이의 총합.

    while (End - Start > 0) // Start와 End가 1 이상 차이 나는 동안 반복.
    {
        Mid = (Start + End) / 2;
        Sum = 0; // 한바퀴 돌았기 때문에, Mid 및 Sum 초기화.

        for (int i = 0; i < ArrSize; i++)
        {
            if (Arr[i] > Mid)
                Sum += Arr[i] - Mid; // 나무 길이가 절단기 높이보다 높으면 CUT
        }

        if (Sum >= Height) // 자른 길이의 합이 목표량보다 높으면
            Start = Mid; // Start 높이 UP
        else // 낮으면
            End = Mid; // End 높이 Down

        if (End - Start == 1) // Start랑 End랑 1 차이 나면
        {
            Mid = End - 1;
            break; // Mid에 값 넣어주고 break
        }
    }
    return Mid; // Mid 리턴.
}

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false); // 속도 증가를 위해 두 줄 추가

    int N, M;
    std::cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        std::cin >> TreeHeight[i];
    }

    std::sort(TreeHeight, TreeHeight + N, compare); // 나무들 높이 정렬

    std::cout << BinarySearch(TreeHeight, N, M); // return된 Mid 값 출력.

    return 0;
}
