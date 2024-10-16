#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	bool up_flag = false, down_flag = false;
	int J_money, S_money, J_stock = 0, S_stock = 0;

	std::cin >> J_money;
	S_money = J_money;

	std::vector<int> stock(14);
	for (int i = 0; i < 14; i++)
		std::cin >> stock[i];

	for (int i = 0; i < 14; i++)
	{
		if (J_money >= stock[i])
		{
			J_stock += (J_money / stock[i]);
			J_money = (J_money % stock[i]);
		}

		if (i > 2)
			if (stock[i - 3] < stock[i - 2] && stock[i - 2] < stock[i - 1] && stock[i - 1] < stock[i])
			{
				S_money += (S_stock * stock[i]);
				S_stock = 0;
			}
			else if (stock[i - 3] > stock[i - 2] && stock[i - 2] > stock[i - 1] && stock[i - 1] > stock[i])
			{
				if (S_money >= stock[i])
				{
					S_stock += (S_money / stock[i]);
					S_money = (S_money % stock[i]);
				} 
			}
	}
	int J = J_money + J_stock * stock[13];
	int S = S_money + S_stock * stock[13];

	if (J == S)
		std::cout << "SAMESAME";
	else if (J > S)
		std::cout << "BNP";
	else
		std::cout << "TIMING";

	return 0;
}