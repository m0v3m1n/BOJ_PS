// 백준 1654번, 랜선 자르기.
// 문제 링크 : https://www.acmicpc.net/problem/1654

#include <iostream>

int K_Arr[10001];

// 함수 및 자료형을 long long 으로 한 이유 :
// 문제에서 랜선의 최대 길이가 2^31 - 1 이라고 해서, 혹시 모를 오버플로우를 방지하기 위함.

long long Binary_Search(int Arr[], int Size, int N)
{
	long long Min = 1; // 자르는 값의 최솟값
	long long Max = 2147483648; // 자르는 값의 최댓값
	long long Mid = (Min + Max) / 2; // 중간값 초기화

	long long Count; // 랜선의 갯수 선언.

	while (Min <= Max)
	{
		Count = 0; // 0으로 초기화
		Mid = (Min + Max) / 2; // 최솟값, 최댓값의 중간값

		for (int i = 0; i < Size; i++)
		{
			Count += Arr[i] / Mid; // 중간값으로 잘랐을 때의 전선 갯수 Count에 추가.
		}

		if (Count < N) // Count < N (갯수가 N 미만 = 짧게 잘라야 함)
		{
			Max = Mid; // 자르는 최대길이 감소.
		}
		else // Count >= N (갯수가 N 초과 = 길게 잘라야 함)
		{
			Min = Mid; // 자르는 최소길이 증가.
		}

		// 자르는 길이를 중간값으로 하기에,
		// 언젠간 Min과 Max가 1 차이로 좁혀지게 됨.

		if (Max - Min == 1) // 둘의 차이가 1 이면
		{
			Mid = Max - 1; // 혹은 Mid = Min;
			// 혹은 retunr Min; 과 같이 return문으로 함수 종료.
			break;
		}
	}

	return Mid;
}

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	// 입력의 개수가 1,000,000개까지 가능하므로,
	// 시간초과 방지를 위해 위의 두 줄 삽입.

	int K, N;
	std::cin >> K >> N;

	for (int i = 0; i < K; i++)
	{
		std::cin >> K_Arr[i];
	}

	std::cout << Binary_Search(K_Arr, K, N);

	return 0;
}
