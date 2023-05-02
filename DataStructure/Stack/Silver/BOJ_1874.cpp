// 백준 번호 1874번, 스택 수열
// 문제 링크 : https://www.acmicpc.net/problem/1874

#include <iostream>
#include <stack>
#include <vector>

bool used[500001];

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL); // 속도 향상용 3줄 삽입.

    int N, Temp; std::cin >> N;
    int ind = 1; // 변수들 입력받고, bool 배열에 사용할 ind에 1 초기화.

    std::stack<int> St;
    std::vector<char> Vec; // 문제 풀이에 사용할 스택과, +,-를 저장할 벡터 선언.

    for (int i = 0; i < N; i++)
    {
        std::cin >> Temp; // 수를 입력받으면
 
        while (ind <= Temp) // ind가 입력받은 수가 될때까지 반복(이미 그 수 이상이면 실행 X)
        {
            if (used[ind] == false) // ind 번째 자연수가 사용되지 않았다면
            {
                St.push(ind);
                used[ind] = true;
                Vec.push_back('+'); // 스택에 ind를 push 후, 사용처리 한 뒤 벡터에 + push.
            }

            ind++; // ind에 1을 더해줌.
        }
      
      // while문이 다 돌았다면, 스택의 top이 Temp일 것임.
        if (St.top() == Temp)
        {
            St.pop();
            Vec.push_back('-');
        } // 만약 스택의 top이 Temp라면 pop, 아니라면 스킵.
    }
  
  // for문이 다 돌았다면, 스택은 비어있거나 수가 남아있을 것임.
    if (St.empty()) // 만약 비어있다면 성공적으로 수행된 것임.
    {
        for (int i = 0; i < Vec.size(); i++)
        {
            std::cout << Vec[i] << '\n'; // +,-를 저장한 벡터를 앞에서부터 출력.
        }
    }
    else // 만약 벡터가 비어있지 않다면, 스택의 push, pop이 실패한 것.
        std::cout << "NO"; // NO 출력.

    return 0;
}
