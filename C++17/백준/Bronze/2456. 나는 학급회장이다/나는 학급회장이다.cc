#include <iostream>
#include <algorithm>
struct points{int point = 0;int num = 0;int p[3] = { 0, };}; bool compare(points a, points b)
{if (a.point == b.point)if (a.p[2] == b.p[2])return a.p[1] > b.p[1];else return a.p[2] > b.p[2]; else return a.point > b.point;} int main(){
std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);std::cout.tie(nullptr); int N, pt; std::cin >> N; points candidate[3]; candidate[0].num = 1; 
candidate[1].num = 2; candidate[2].num = 3; for (int i = 0; i < N; i++) for (int j = 0; j < 3; j++) { std::cin >> pt; candidate[j].p[pt - 1]++;
candidate[j].point += pt;} std::sort(candidate, candidate + 3, compare); if (candidate[0].point == candidate[1].point) if (candidate[0].p[2] ==
candidate[1].p[2]) if (candidate[0].p[1] == candidate[1].p[1]) std::cout << 0 << ' ' << candidate[0].point; else std::cout << (candidate[0].p[1] >
candidate[1].p[1] ? candidate[0].num : candidate[1].num) << ' ' << candidate[0].point; else std::cout << (candidate[0].p[2] > candidate[1].p[2] ?
candidate[0].num : candidate[1].num) << ' ' << candidate[0].point; else std::cout << candidate[0].num << ' ' << candidate[0].point; return 0;}
