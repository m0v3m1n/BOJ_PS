#pragma warning(disable:4996)

#include <iostream>
#include <cstring>

#define MAX 1000001
char S[MAX];
char P[MAX];

int main()
{
	std::scanf("%s %s", S, P);
	char * strstr_pointer = strstr(S, P);

	if (strstr_pointer == NULL)
		std::cout << 0;
	else
		std::cout << 1;

	return 0;
}