#include <iostream>
#include <string>

int main()
{
	int A, B, C; std::cin >> A >> B >> C;
	std::cout << A + B - C << '\n' << std::stoi(std::to_string(A) + std::to_string(B)) - C;
}