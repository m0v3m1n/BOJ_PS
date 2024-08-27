#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	bool flag = false;
	int T; std::cin >> T;

	if (T < 0)
	{
		T *= -1;
		flag = true;
	}

	std::vector<int> V(T + 1);
	V[0] = 0; V[1] = 1;

	for (int i = 2; i <= T; i++)
	{
		V[i] = V[i - 2] % 1000000000 + V[i - 1] % 1000000000;
		V[i] %= 1000000000;
	}

	if (flag) // T 가 음수면?
	{
		// V[-2] = V[-3] + V[-4].
		// V[-4] = V[-5] + V[-6]. ...... 어케 함?
		//							V[0] = 0.
		// V[1] = V[0] + V[-1],		V[-1] = 1.
		// V[0] = V[-1] + V[-2],	V[-2] = -1.
		// V[-1] = V[-2] + V[-3],	V[-3] = 2.
		// V[-2] = V[-3] + V[-4],	V[-4] = -3.
		// V[-3] = V[-4] + V[-5],	V[-5] = 5.
		// V[-4] = V[-5] + V[-6],	V[-6] = -8.
		// --> 그냥 피보나치 구한 다음에 짝수면 음수 곱해주면 됨 ㅋㅋ EZ~

		std::cout << ((T % 2 == 0) ? -1 : 1) << '\n' << V[T];
	}
	else if (T == 0)
		std::cout << 0 << '\n' << 0;
	else
		std::cout << 1 << '\n' << V[T];
}