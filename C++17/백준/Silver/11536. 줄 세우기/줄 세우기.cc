#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	int N; std::cin >> N;

	std::vector<std::string> input(N), inc(N), dec(N);
	for (int i = 0; i < N; i++)
		std::cin >> input[i];

	inc = input; dec = input;
	std::sort(inc.begin(), inc.end());
	std::sort(dec.begin(), dec.end(), std::greater<std::string>());

	int flag = 0; // 0 : Neither, 1 : Increasing, 2 : Decreasing
	if (input == inc)
		flag = 1;
	else if (input == dec)
		flag = 2;
	
	if (!flag)
		std::cout << "NEITHER";
	else
		std::cout << (flag == 1 ? "INCREASING" : "DECREASING");

	return 0;
}
