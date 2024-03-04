// 백준 번호 1463, 1로 만들기
// 문제 링크 : https://www.acmicpc.net/problem/1463

#include <iostream>

int DPArr[1000001];

int main()
{
	int N;
	std::cin >> N;

	int Min_d2;
	int Min_d3;
	int Min_s1;
  
  // 0~3까지의 초기값.
	DPArr[0] = 0;
	DPArr[1] = 0;
	DPArr[2] = 1;
	DPArr[3] = 1;

	if (N == 1) // 입력이 1일 때.
	{
		std::cout << 0;
		return 0;
	}
	else if (N == 2 || N == 3) // 입력이 2,3일 때.
	{
		std::cout << 1;
		return 0;
	}
	// 1일 땐 0번, 2, 3일땐 1번 필요

	else // 그 외.
	{
		for (int i = 4; i <= N; i++)
		{
			Min_d2 = DPArr[i / 2] + 1; // 2로 나누었을 때의 최솟값.
			Min_d3 = DPArr[i / 3] + 1; // 3으로 나누었을 때의 최솟값.
			Min_s1 = DPArr[i - 1] + 1; // 1을 뺐을 때의 최솟값.

			if (i % 2 == 0 && i % 3 == 0) // 2, 3의 공배수일 때
				DPArr[i] = (Min_d2 < Min_d3) ? Min_d2 : Min_d3; // 2,3으로 나눈 값 중 작은 값을 DPArr[i]에 대입.
			else if (i % 2 == 0) // 2의 배수일 때.
				DPArr[i] = (Min_d2 < Min_s1) ? Min_d2 : Min_s1; // 2로 나눈 값과 1을 뺐을 때의 값 중 작은 값을 DPArr[i]에 대입.
			else if (i % 3 == 0)
				DPArr[i] = (Min_d3 < Min_s1) ? Min_d3 : Min_s1; // 3으로 나눈 값과 1을 뺐을 때의 값 중 작은 값을 DPArr[i]에 대입.
			else // 2,3으로 나누어 떨어지지 않으면 1 뺴기.
				DPArr[i] = DPArr[i - 1] + 1;
		}
	}
	
	std::cout << DPArr[N];

	return 0;
}
