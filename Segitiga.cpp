#include<stdio.h>


void main()
{
	int n, i, a = 0, k=1, l=1, b=0, x;
	printf("Masukan angka : ");
	scanf("%d", &n); fflush(stdin);
	for(i = 1; i <= (n*n); i++)
	{
		x=(n*k)+l;
		if (i == x) //6, 11, 12, 16, 17, 18, 21, 22, 23, 24
		{
			printf(" ");
			k++;
			l++;
		}
		else
		{
			printf("*");
		}
		a++;
		if (a == n)
		{
			printf("\n");
			a = 0;
		}
	}


	getchar();
}

	/*for(k = 0; k < (i-1); k++)
		{
			
		}

		for(j = 0; j <= n-i; j++)
		{
			printf("*");
		}*/
