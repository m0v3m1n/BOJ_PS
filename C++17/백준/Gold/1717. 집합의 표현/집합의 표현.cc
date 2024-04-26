#include <iostream>
#include <vector>

std::vector<int> V;

int find(int opr)
{
    if (V[opr] == opr) // 얘가 최상위임
        return opr;
    else
        return V[opr] = find(V[opr]);
}

void merge(int opr1, int opr2)
{
    int X = find(opr1);
    int Y = find(opr2);

    if (X == Y) // 이미 결합됨.
        return;
    else if (X < Y)
        V[Y] = X;
    else
        V[X] = Y;
}

void isUnion(int opr1, int opr2)
{
    if (find(opr1) == find(opr2))
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M, opcode, opr1, opr2; std::cin >> N >> M;

    for (int i = 0; i <= N; i++)
        V.push_back(i);

    for (int i = 0; i < M; i++)
    {
        std::cin >> opcode >> opr1 >> opr2;
        if (opcode == 0) // 유니온
            merge(opr1, opr2);
        else
            isUnion(opr1, opr2);
    }
    return 0;
}