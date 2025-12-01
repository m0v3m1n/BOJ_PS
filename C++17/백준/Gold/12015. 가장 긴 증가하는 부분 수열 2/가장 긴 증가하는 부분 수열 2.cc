#include <iostream>
#include <vector>

int lower_bound(std::vector<int>& v, int target)
{
	int low = 0;
	int high = v.size();
	int idx = v.size();

	while (low < high)
	{
		int mid = (low + high)  / 2;

		if (v[mid] >= target)
		{
			high = mid;
			idx = mid;
		}
		else
			low = mid + 1;
	}

	return idx;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int N; std::cin >> N;

	std::vector<int> V(N), tails;
	for (auto& K : V)
		std::cin >> K;

	for (int i = 0; i < N; i++)
	{
		if (tails.empty()) // 만약 비어있다면?
			tails.push_back(V[i]);
		else
		{
			// 10, 15, 20일 때 14가 들어올 경우? --> 15 자리에 14 넣어야 함. --> upper_bound?
            // 해보니까 아니였음... lower_bound로 10 찾은 뒤 10 다음 숫자를 14로 대체하면 됨.

			int idx = lower_bound(tails, V[i]);

			if(idx == tails.size())
				tails.push_back(V[i]);
			else
				tails[idx] = V[i];
		}

		//for (auto& K : tails)
		//	std::cout << K << ' ';
		//std::cout << '\n';
	}

	std::cout << tails.size();
}