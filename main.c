#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int multiplication(int a, int b)
{
	return a*b;
}
int main()
{
	printf("add %d\n", add(4,5));
	printf("multiplication %d\n", multiplication(4,5));
	return 0;
}
