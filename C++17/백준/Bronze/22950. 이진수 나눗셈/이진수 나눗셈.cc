#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, K;
	std::string B;

	std::cin >> N >> B >> K;

	bool exist_1 = false;
	for (auto& K : B)
		if (K == '1')
			exist_1 = true;

	if (exist_1)
		if (K > N)
			std::cout << "NO";
		else
		{
			bool flag = true;

			for (int i = N - K; i < N; i++)
				if (B[i] == '1')
					flag = false;

			if (flag)
				std::cout << "YES";
			else
				std::cout << "NO";
		}
	else
		std::cout << "YES";

	return 0;
}