#include <iostream>
int main() { int N, sum = 0, tmp; std::cin >> N; for (int i = 1; i <= N; i++) {std::cin >> tmp; tmp == i ? sum += 1 : sum;} std::cout << N - sum; }