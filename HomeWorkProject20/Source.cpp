#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ChangetoBE(int x);
int main()
{
	int num;
	printf("Put Your A.E. : ");
	scanf("%d", &num);
	ChangetoBE(num);
	return 0;
}
int ChangetoBE(int x)
{
	if (x >= 0)
	{
		x = x + 543;
		printf("%d", x);
	}
	else
	{
		printf("Please insert number that is greater or equal zero");
	}
	return x;
}