#include <iostream>

int main()
{
	int R, G; std::cin >> R >> G;

	// if R == 20, 9 X 3, 8 X 4, 7 X 5, ... 3 X 7.
	// (R / 2) - 1 X 3, (R / 2) - 2 X 4, ...
	
	for (int width = (R / 2) - 1; width >= 3; width--)
	{
		int height = 3 + ((R / 2) - 1 - width);

		//std::cout << "Width : " << width << ' ' << ", Height : " << height << '\n';
		//std::cout << "G : " << ' ' << (width - 2) * (height - 2) << "\n\n";

		if ((width - 2) * (height - 2) == G)
		{
			std::cout << width << ' ' << height;
			break;
		}
	}
}