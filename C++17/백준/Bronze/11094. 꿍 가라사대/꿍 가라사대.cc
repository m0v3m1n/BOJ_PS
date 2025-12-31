#include <iostream>
#include <string>

int main()
{
	int N; std::cin >> N;
	std::cin.ignore();

	while (N--)
	{
		std::string S;
		std::getline(std::cin, S);

		if (S.length() >= 10) // Simon says = 10글자
			if (S.substr(0, 10) == "Simon says") // 10글자 넘는데 첫 시작이 Simon says 면?
				std::cout << S.substr(10, S.length() - 10) << '\n'; // 공백부터 출력
	}

	return 0;
}