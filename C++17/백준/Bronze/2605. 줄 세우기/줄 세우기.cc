#include <iostream>
#include <vector>

int n, x;
std::vector<int> v; // 뽑기번호, 순서

int main()
{
    std::cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        std::cin >> x;
        v.insert(v.begin() + x, i); // 어떤 위치에, 어떤 값 을 넣을지
    }
    
    for(int i=n-1; i>= 0; i--) // 역순 출력
        std::cout << v[i] << " ";

  return 0;
}