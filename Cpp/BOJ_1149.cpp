// 백준 1149번, RGB거리
// 문제 링크 : https://www.acmicpc.net/problem/1149

#include <iostream>

int DPArr[1001][3] = {};
int CArr[1001][3] = {};

int main()
{
	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
			std::cin >> CArr[i][j]; // 색에 따른 비용값 입력
	}

	// DPArr[i][j] 는 i번째 집을 j 색으로 칠했을 때까지의 최솟값.

	// 첫번째 집은 각각의 색이 모두 최솟값.
	DPArr[0][0] = CArr[0][0];
	DPArr[0][1] = CArr[0][1];
	DPArr[0][2] = CArr[0][2]; 

	for (int i = 1; i < N; i++)
	{
		DPArr[i][0] = CArr[i][0] + (DPArr[i - 1][1] < DPArr[i - 1][2] ? DPArr[i - 1][1] : DPArr[i - 1][2]);
		// i 번째 집을 빨간색으로 칠했다면
		// i 번째 집까지의 최솟값은 (i - 1)번째 집까지의 최솟값 + 빨간색으로 칠하는 비용.
		// 
		// ex) 두번째 집을 빨간색 => 첫번째 집의 최솟값(초록색 or 파란색) + 빨간색 비용.
		// ex) 세번째 집을 파란색 => 두번째 집의 최솟값(빨간색 or 초록색) + 파란색 비용.

		DPArr[i][1] = CArr[i][1] + (DPArr[i - 1][0] < DPArr[i - 1][2] ? DPArr[i - 1][0] : DPArr[i - 1][2]);
		DPArr[i][2] = CArr[i][2] + (DPArr[i - 1][0] < DPArr[i - 1][1] ? DPArr[i - 1][0] : DPArr[i - 1][1]);
		// 위와 동일한 방법.
	}

	if (DPArr[N - 1][0] <= DPArr[N - 1][1] && DPArr[N - 1][0] <= DPArr[N - 1][2])
		std::cout << DPArr[N - 1][0];
	else if (DPArr[N - 1][1] <= DPArr[N - 1][0] && DPArr[N - 1][1] <= DPArr[N - 1][2])
		std::cout << DPArr[N - 1][1];
	else
		std::cout << DPArr[N - 1][2];

	return 0;
}
