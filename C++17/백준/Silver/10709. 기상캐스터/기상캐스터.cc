// https://www.acmicpc.net/problem/10709

#include <iostream>

#include <vector>

int main()

{

   std::ios_base::sync_with_stdio(false);

   std::cin.tie(nullptr);

   std::cout.tie(nullptr);

   std::string S;

   int r, c; std::cin >> r >> c;

   std::vector<int> tmp(c);

   std::vector<std::vector<int>> V;

   for (int i = 0; i < r; i++)

      V.push_back(tmp);

   for (int i = 0; i < r; i++)

   {

      std::cin >> S;

      for (int j = 0; j < S.size(); j++)

         if (S[j] == 'c')

            V[i][j] = 0;

         else

            V[i][j] = -1;

   }

   for (int i = 0; i < r; i++)

   {

      for (int j = 0; j < c; j++)

      {

         if (V[i][j] == -1)

         {

            int dist = 0;

            while (V[i][j - dist] != 0)

            {

               if (j - dist == 0)

                  break;

               else

                  dist++;

            }

            if (j - dist != 0 || V[i][j-dist] == 0)

               V[i][j] = dist;

         }

      }

   }

   for (auto& K : V)

   {

      for (auto& L : K)

         std::cout << L << ' ';

      std::cout << '\n';

   }

   return 0;

}