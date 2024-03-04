// 백준 1929번, 소수 구하기.
// 문제 링크 : https://www.acmicpc.net/problem/1929

#include <iostream>

int DecimalArr[1000001]; // Main 함수 밖에 큰 배열 냅두기

int main() //1978번
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int M, N;
	std::cin >> M >> N;
	
	for (int i = 0; i <= N; i++) // 1부터 N까지 배열 선언 및 모두 1로 초기화
	{
		DecimalArr[i] = 1;
	}


	for (int i = 2; i <= N; i+=2) // 2의 배수 싸그리 컷
	{
		DecimalArr[i] = -1;
	}

	DecimalArr[1] = -1; // 1은 소수 아님
	DecimalArr[2] = 1; // 2는 소수

	int CheckingOdd = 3; // 3부터 홀수들의 소수 판별 시작
  
	if (N % 2 == 0 && N > 2) // N이 짝수면 홀수 만들어주고 시작.
		N -= 1;

	while (CheckingOdd <= (N/2)+1) // 이때, 홀수는 (N의 절반 + 1)까지만.
	{ // N/2 + 2는 2의 배수고, N/2 + 3 부터는 곱해서 N 미만이 나오는 자연수가 없기 때문.
		for (int j = CheckingOdd; j < N;) // N까지 체크.
		{
			j += CheckingOdd; // j는 기존값의 n배수
			if (j > N) // 만약 기존값의 n배수가 N을 넘는다면
				break; // for문을 탈출한다.

			DecimalArr[j] = -1; // 배수들에 모두 -1 을 넣는다.
		}
		CheckingOdd += 2; // 다음 홀수로 넘어간다
	}

	for (int i = M; i <= N; i++) // M부터 N까지
	{
		if (DecimalArr[i] == 1) // M이 소수면 출력
			std::cout << i << '\n';
	}

	return 0;
}
