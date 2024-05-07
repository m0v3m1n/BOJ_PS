#include <iostream>
int main(){int N, st, app, sum = 0;std::cin >> N;for (int i = 0; i < N; i++) { std::cin >> st >> app; sum += app % st; }std::cout << sum;return 0;}