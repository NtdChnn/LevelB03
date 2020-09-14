#include<stdio.h>
void drawsquare(int x)
{
	for(int i = 1 ; i<=x ; i++)
	{ for (int j = 1; j <= x; j++) { printf("* "); } printf("\n");}
	printf("\n");
}
int main()
{
	int num, size[50];
	scanf_s("%d", &num);
	for (int i = 0; i <= num-1; i++)
	{ scanf_s("%d", &size[i]); }
	for (int i = 0; i <= num - 1; i++)
	{ drawsquare(size[i]);}
	return 0;
}