// 백준 번호 2630번, 색종이 만들기.
// 문제 링크 : https://www.acmicpc.net/problem/2630

#include <iostream>

int BWMap[129][129] = {}; // 최대 128 x 128칸.

int TotalBlue = 0;
int TotalWhite = 0; // 총 색종이의 수

int ColorPaper(int Arr[129][129], int RStartIndex, int REndIndex, int CStartIndex, int CEndIndex)
{
	int blue = 0; 
	int white = 0; // 색종이의 수 0으로 초기화

	int RMid = (RStartIndex + REndIndex) / 2;
	int CMid = (CStartIndex + CEndIndex) / 2; // 행과 열의 중간값

	int RDiff = REndIndex - RMid;
	int CDiff = CEndIndex - CMid; // 중간값으로부터 양 끝값의 차이

	for (int i = RStartIndex; i < REndIndex; i++)
	{
		for (int j = CStartIndex; j < CEndIndex; j++)
		{
			if (Arr[i][j] == 1) // 해당 칸이 파란색이면 파란색 색종이 수 증가.
				blue++;
			else if (Arr[i][j] == 0) // 해당 칸이 하얀색이면 하얀색 색종이 수 증가.
				white++;
		}
	}

	if (blue == ((REndIndex - RStartIndex) * (CEndIndex - CStartIndex))) // 모든 칸이 파란색이면
	{
		TotalBlue++; // 파란색 색종이 수(구역의 수 증가)
		return 0;
	}
	else if (white == ((REndIndex - RStartIndex) * (CEndIndex - CStartIndex))) // 모든 칸이 하얀색이면
	{
		TotalWhite++; // 하얀색 색종이 수(구역의 수 증가)
		return 0;
	}

	else // 모든 칸이 똑같은 색이 아니라면
	{ 
		ColorPaper(Arr, RMid - RDiff, RMid, CMid - CDiff, CMid); // 좌상단
		ColorPaper(Arr, RMid, RMid + RDiff, CMid - CDiff, CMid); // 좌하단
		ColorPaper(Arr, RMid - RDiff, RMid, CMid, CMid + CDiff); // 우상단
		ColorPaper(Arr, RMid, RMid + RDiff, CMid, CMid + CDiff); // 우하단
    // 재귀 돌려서 모든 칸 정복하러 감
		return 0;
	}
}

int main()
{
	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cin >> BWMap[i][j];
		}
	}

	ColorPaper(BWMap, 0, N, 0, N);

	std::cout << TotalWhite << '\n' << TotalBlue;

	return 0;
}
