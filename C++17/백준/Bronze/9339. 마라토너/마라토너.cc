#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, K, N;
	int participant, hours, minutes;
	int first, bestRecord, cnt;

	std::cin >> T;

	while (T--)
	{
		cnt = 0;
		first = -1;
		bestRecord = 361;

		std::cin >> K;
		std::vector<int> V(K);
		for (auto& K : V)
			std::cin >> K;

		std::cin >> N;
		for (int i = 0; i < N; i++)
		{
			std::cin >> participant >> hours >> minutes;
			int record = (hours * 60) + minutes;

			if (hours != -1 && record <= 360 && cnt < K) // 포기 X, 6시간 이내, 통과한 수강생 수 < 수강생 수일때.
					for (int j = 0; j < K; j++) // 수강생들 중에서
						if (participant == V[j]) // 만약 참가자가 수강생 목록에 있다면
						{
							if (record < bestRecord) // 기록 제일 좋은지 확인
							{
								bestRecord = record;
								first = participant;
							}
							cnt++; // 수강생 수 증가
							break;
						}
		}

		std::cout << first << ' ' << cnt << '\n';
	}

	return 0;
}