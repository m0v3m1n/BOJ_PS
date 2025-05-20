#include <iostream>
int main() { int i, j; while (1) { std::cin >> i >> j; if (!i && !j) break; else std::cout << i / j << ' ' << i % j << ' ' << '/' << ' ' << j << '\n'; } }