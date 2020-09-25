#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int x1;
	int x2;

	printf("Enter two integers, and I will tell you\n");
	printf("the relationships they satisfy:");

	scanf_s("%d%d", &x1, &x2);

	if (x1==x2)
	{
		printf("%d is equal to %d\n", x1, x2);
	}
	if (x1 != x2)
	{
		printf("%d is not equal to %d\n", x1, x2);
	}
	if (x1 < x2)
	{
		printf("%d is less to %d\n", x1, x2);
	}
	if (x1 > x2)
	{
		printf("%d is greater to %d\n", x1, x2);
	}
	if (x1 <= x2)
	{
		printf("%d is less than or equal to %d\n", x1, x2);
	}
	if (x1 >= x2)
	{
		printf("%d is greater than or equal to %d\n", x1, x2);
	}
	system("pause");
		return 0;
}