// 백준 번호 2108번, 통계학
// 문제 링크 : https://www.acmicpc.net/problem/2108

#include <iostream>
#include <cmath>

int OriginArr[500001];
int TempArr[500001]; // 주어지는 수의 최대 개수가 50만이기에, 배열 선언.

int PosArr[4001] = {};
int NegArr[4001] = {}; // 주어지는 수의 절대값의 최대가 4,000이기에, 배열 선언.

int ForSortArr[8001]; // 수의 총합 개수를 정렬하기 위한 배열.

void MergeSort(int Arr[], int Left, int Right) // 병합 정렬 사용 (std::sort 함수도 사용 가능함)
{
	int Mid = (Left + Right) / 2;
	int LeftIndex = Left;
	int RightIndex = (Left + Right) / 2;
	int TempIndex = Left; // Mid와 좌,우 인덱스 선언 및 초기화.

	if (Mid - Left > 1)
		MergeSort(Arr, Left, Mid); // 배열의 크기가 1이 될때까지 재귀를 사용해 분리.
	if (Right - Mid > 1)
		MergeSort(Arr, Mid, Right); // 배열의 크기가 1이 될때까지 재귀를 사용해 분리.

  // 배열이 모두 분리되었다면, 차례로 정렬 시작.
  
	while (LeftIndex < Mid && RightIndex < Right) // 좌측 Index가 Mid 미만이고 우측 Index가 배열 크기 미만일 때
	{
		if (Arr[LeftIndex] < Arr[RightIndex])
			TempArr[TempIndex++] = Arr[LeftIndex++]; // 좌측값이 작으면 임시 배열에 좌측값 저장.
		else
			TempArr[TempIndex++] = Arr[RightIndex++]; // 우측값이 작으면 임시 배열에 우측값 저장.
	}

  // 만약 위의 while문이 종료된 후에 좌측 배열이나 우측 배열에 값이 남아있다면
	while (LeftIndex < Mid)
		TempArr[TempIndex++] = Arr[LeftIndex++];

	while (RightIndex < Right)
		TempArr[TempIndex++] = Arr[RightIndex++];
  // 임시 배열에 좌측 또는 우측 배열 싸그리 저장.
  
	for (int i = Left; i < Right; i++) // 그 후, 기존 배열에 임시 배열의 값들을 저장.
	{
		Arr[i] = TempArr[i];
	}
}

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false); // 속도 향상용 두 줄 삽입.

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> OriginArr[i];
	}

	MergeSort(OriginArr, 0, N);

	// 산술평균
	double Sum = 0;
	for (int i = 0; i < N; i++)
	{
		Sum += OriginArr[i];
	}
	std::cout << std::floor((Sum / (double)N) + 0.5) << '\n';

	// 중앙값
	std::cout << OriginArr[(N / 2)] << '\n';

	// 최빈값
	int CountMax = 0;
	int FSAIndex = 0;

	// 양수, 음수 배열 이용
	for (int i = 0; i < N; i++)
	{
		if (OriginArr[i] >= 0) // 0 이상이면 양수 배열에, i번째 수의 개수에 +1.
			PosArr[OriginArr[i]]++;
		else
		{ // 0보다 작다면 음수 배열에, i * -1번째 수의 개수에 +1.
			NegArr[OriginArr[i] * -1]++;
		}
	}

	// 최빈값의 등장횟수 구하기
	for (int i = 0; i < N; i++)
	{
		if (OriginArr[i] >= 0 && PosArr[OriginArr[i]] > CountMax)
			CountMax = PosArr[OriginArr[i]]; // 양수에서 Max값 탐색.
		else if (OriginArr[i] < 0 && NegArr[OriginArr[i] * -1] > CountMax)
			CountMax = NegArr[OriginArr[i] * -1]; // 음수에서 Max값 탐색.
	}

	for (int i = 0; i < N;)
	{
		if (OriginArr[i] < 0 && NegArr[OriginArr[i] * -1] == CountMax)
		{ // 음수에서 Max값만큼의 등장한 수에 대해,
			ForSortArr[FSAIndex++] = OriginArr[i]; // ForSortArr[i]에 해당값 저장.
			i += NegArr[OriginArr[i] * -1]; // 등장한 만큼 i에 더해줌.
		}
		else if (OriginArr[i] >= 0 && PosArr[OriginArr[i]] == CountMax)
		{ // 양수에서 Max값 만큼 등장한 수에 대해,
			ForSortArr[FSAIndex++] = OriginArr[i]; // ForSortArr[i]에 해당값 저장.
			i += PosArr[OriginArr[i]]; // 등장한 만큼 i에 더해줌.
		}
		else
			i++;
	}

	if (FSAIndex > 1) // 만약 최빈값이 2개 이상이라면(2개면 FSAIndex가 2에서 +1이 되서 3임)
		std::cout << ForSortArr[1] << '\n'; // 두 번째로 작은 최빈값 출력.
	else // 아니라면
		std::cout << ForSortArr[0] << '\n'; // 최빈값 출력.

	// 범위
	int Range = OriginArr[N - 1] - OriginArr[0];
	std::cout << Range << '\n';

	return 0;
}
