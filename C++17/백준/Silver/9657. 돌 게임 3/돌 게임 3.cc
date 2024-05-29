#include <iostream>

int main()
{
	int N;
	char DP[1001]; DP[0] = 'S';

	// 초기값.
	DP[1] = 'S'; DP[2] = 'C'; DP[3] = 'S'; DP[4] = 'S';

	// DP 배열 삽입.
	for (int i = 5; i <= 1000; i++)
	{
		if (DP[i - 1] == 'C' || DP[i - 3] == 'C' || DP[i - 4] == 'C') // 1,3,4칸 떨어진 것중 하나라도 C면?
			DP[i] = 'S';
		else // 하나도 C가 아니라면? --> 모든게 S.
			DP[i] = 'C';
	}

	// 입력 및 출력.
	std::cin >> N;

	if (DP[N] == 'S')
		std::cout << "SK";
	else
		std::cout << "CY";

	return 0;
}