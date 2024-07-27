#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	long long N; std::cin >> N;

	long long NUMS[10];
	for (long long i = 0; i < 10; i++)
		NUMS[i] = i; // 0부터 10까지.

	std::vector<long long> V;
	std::vector<long long> filter(10);

	std::vector<long long> tmp;
	long long tmp_size;
	long long tmp_sum;

	for (long long i = 1; i <= 10; i++) // 한 자릿수 부터 열 자릿수까지.
	{
		for (long long j = 0; j < 10 - i; j++)
			filter[j] = 0;
		for (long long j = 10 - i; j < 10; j++)
			filter[j] = 1;
		// ex) 0 9개, 1 1개 --> 숫자 10개 중 하나 선택. --> vector에 추가한 뒤 sort.

		do
		{
			for (int k = 0; k < 10; k++)
				if (filter[k] == 1)
					tmp.push_back(k);

			std::sort(tmp.begin(), tmp.end(), std::greater<int>());
			// i개 자연수 삽입 후 내림차순 정렬.
			// --> 숫자 큰게 먼저 나옴.

			tmp_sum = 0; // 합 0으로 초기화.
			tmp_size = tmp.size(); // i개 들어가있을 것.
			
			for (int i = 0; i < tmp_size; i++)
			{
				tmp_sum *= 10; // 이전까지의 숫자 * 10.
				tmp_sum += tmp[i]; // 이후 한 자릿수 더해주기.
			}

			V.push_back(tmp_sum);

			while (!tmp.empty())
				tmp.pop_back(); // 이후 tmp 다시 없었던 배열로...

		} while (std::next_permutation(filter.begin(), filter.end()));
	}

	std::sort(V.begin(), V.end());

	if (N >= V.size())
		std::cout << -1;
	else
		std::cout << V[N];
}