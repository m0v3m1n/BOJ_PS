#include <iostream>
#include <vector>

bool prime[4010000];
std::vector<long long> V;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	V.push_back(2);

	for (long long i = 4; i < 4010000; i += 2) // 4부터 모든 짝수는 소수 아님.
		prime[i] = true;

	for (long long i = 3; i < 4010000; i += 2) // 3부터 모든 홀수 검사.
		if (prime[i] == false) // 만약 소수면
		{
			V.push_back(i);
			for (long long j = i + i; j < 4010000; j += i) // 배수 싸그리 false
				prime[j] = true;
		}

	// std::cout << V.size() << '\n';

	long long N, count = 0, l_idx = 0, r_idx = 0, sum = V[r_idx];
	std::cin >> N;

	while ((l_idx < V.size() - 1 && r_idx < V.size() - 1) // 벡터 사이즈 안이면서
		&& V[l_idx] <= V[r_idx])
	{
		// std::cout << sum << ' ' << V[l_idx] << ' ' << V[r_idx] << '\n';

		if (sum < N)
		{ // 합이 N보다 작으면 right 이동.
			r_idx++;
			sum += V[r_idx];
		}
		else if (sum == N)
		{ // 같으면 횟수 증가 후 left 이동.
			count++;
			sum -= V[l_idx];
			l_idx++;
		}
		else
		{ // 합이 N보다 크면 left 이동.
			sum -= V[l_idx];
			l_idx++;
		}
	}
	std::cout << count;
	return 0;
}