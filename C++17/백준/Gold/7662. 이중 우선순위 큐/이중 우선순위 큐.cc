#include <iostream>
#include <set>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int T, N, num; 
	char c;
	
	std::cin >> T;

	while (T--)
	{
		std::multiset<int> PQ_unjury;
		std::cin >> N;

		while (N--)
		{
			std::set<int>::iterator IT;
			std::cin >> c >> num;

			if (c == 'I')
				PQ_unjury.insert(num);
			else
				if (PQ_unjury.empty())
					continue;
				else
				{
					if (num == 1)
					{
						IT = PQ_unjury.end();
						IT--;
					}
					else
						IT = PQ_unjury.begin();

					PQ_unjury.erase(IT);
				}
		}

		if (PQ_unjury.empty())
			std::cout << "EMPTY" << '\n';
		else
		{
			std::set<int>::iterator I;
			I = PQ_unjury.end(); I--; std::cout << *I << ' ';
			I = PQ_unjury.begin(); std::cout << *I << '\n';
		}
	}
}