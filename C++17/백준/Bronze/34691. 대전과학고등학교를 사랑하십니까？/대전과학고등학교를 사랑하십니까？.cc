#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	std::string tmp;
	while (1)
	{
		std::cin >> tmp;

		if (tmp == "end")
			break;
		else if (tmp == "animal")
			std::cout << "Panthera tigris" << '\n';
		else if (tmp == "flower")
			std::cout << "Forsythia koreana" << '\n';
		else if (tmp == "tree")
			std::cout << "Pinus densiflora" << '\n';
	}
}