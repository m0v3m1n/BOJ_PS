#include <iostream>
#include <queue>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N, tmp; std::cin >> N;
	std::queue<int> Q;

	while (1)
	{
		std::cin >> tmp;

		if (tmp == -1)
			break;
		else if (tmp) // tmp != 0 --> 패킷 들어옴
			if (Q.size() == N)
				continue;
			else
				Q.push(tmp);
		else // tmp == 0 --> 패킷 처리
			if (Q.empty()) // 비어있을 때 0은 안들어오지만 일단은... ㅋ
				continue;
			else
				Q.pop();
	}

	if (Q.empty())
		std::cout << "empty";
	else
	{
		while (!Q.empty())
		{
			std::cout << Q.front() << ' ';
			Q.pop();
		}
	}

	return 0;
}